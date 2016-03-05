Drupal.behaviors.indies_research_stories = {
  attach: function(context, settings) {
    (function ($) {

      // Make the video flexible
      $vids = $(".video-embed-container").find("embed,iframe,object");
      $vids.addClass("flexvideo");
      $vids.attr("height", "");
      $vids.attr("width", "");

      // Create modal pop up.
      $(".play-button").colorbox({
        inline : true,
        scrolling : false,
        maxWidth : "90%",
        maxHeight : "90%",
        width: "80%",
        height : "80%"
      });

    })(jQuery);
  }
};


(function ($) {

  // Resize responsive responsible.
  $(window).resize(function(e) {
    $.colorbox.resize({
      width: "80%",
      height : "80%"
    });
  });

  // Have the video match the colorbox size.
  $(document).bind('cbox_load', function() {
    $("#colorbox").find("iframe,embed,object").css("height", $("#cboxLoadedContent").height() + "px");
  });

  // Autoplay the youtubes.
  $(document).bind('cbox_complete', function() {
    // Set youtube to autoplay.
    $iframes = $("#colorbox .video-embed-container iframe");
    $.each($iframes, function(i, v) {
      var src = $(v).attr('src');
      if (src.search("autoplay") !== -1) {
        return;
      }
      src = src + "?autoplay=1";
      $(v).attr('src', src);
    });
  });

  // Stop the autoplay on close.
  $(document).bind('cbox_closed', function() {
    // Set youtube to autoplay.
    $iframes = $(".video-embed-container iframe");
    $.each($iframes, function(i, v) {
      var src = $(v).attr('src');
      if (src.search("autoplay") !== -1) {
        src = src.replace("?autoplay=1", "");
        $(v).attr('src', src);
      }
    });
  });

})(jQuery);
