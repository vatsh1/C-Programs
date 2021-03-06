<!DOCTYPE html>
<!-- saved from url=(0029)https://ide.codingblocks.com/ -->
<html style="background-color: white; transition: background-color 0.15s ease 0s;"><link type="text/css" id="dark-mode" rel="stylesheet" href="https://ide.codingblocks.com/"><style type="text/css" id="dark-mode-custom-style"></style><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><title>Coding Blocks IDE</title><meta name="description" content="Coding Blocks Online IDE | Run and check your code"><meta name="keywords" content="coding blocks, codingblocks, online ide, ide, run code"><meta name="author" content="Coding Blocks"><meta name="copyright" content="Coding Blocks"><meta name="url" content="https://ide.codingblocks.com"><meta property="og:type" content="website"><meta property="og:site_name" content="Coding Blocks IDE"><meta property="og:url" content="https://ide.codingblocks.com"><meta property="og:title" content="Coding Blocks IDE"><meta property="og:description" content="Coding Blocks Online IDE | Run and check your code"><meta property="og:image" content="https://codingblocks.com/assets/images/icons/favicon-32x32.png"><meta itemprop="name" content="Coding Blocks IDE"><meta itemprop="description" content="Coding Blocks Online IDE | Run and check your code"><meta itemprop="image" content="https://codingblocks.com/assets/images/icons/favicon-32x32.png"><meta name="twitter:card" content="summary"><meta name="twitter:site" content="@CodingBlocksIn"><meta name="twitter:title" content="Coding Blocks IDE"><meta name="twitter:description" content="Coding Blocks Online IDE | Run and check your code"><meta name="viewport" content="width=device-width,initial-scale=1"><script type="text/javascript" async="" src="./topic_files/analytics.js.download"></script><script>// if url contains '#' redirect
        const hash = window.location.hash
        if (hash) {
          window.location.href = window.location.origin + hash.replace("#", "")
        }</script><link href="./topic_files/css" rel="stylesheet"><script src="./topic_files/interact.min.js.download"></script><link rel="icon" type="image/png" href="https://codingblocks.com/assets/images/icons/favicon-32x32.png"><link href="./topic_files/vendor.690d6552109218d766a8.css" rel="stylesheet"><link href="./topic_files/app.0bd0d635677829b593ae.css" rel="stylesheet"><style type="text/css">.vue-notification-group{display:block;position:fixed;z-index:5000}.vue-notification-wrapper{display:block;overflow:hidden;width:100%;margin:0;padding:0}.notification-title{font-weight:600}.vue-notification-template{background:#fff}.vue-notification,.vue-notification-template{display:block;box-sizing:border-box;text-align:left}.vue-notification{font-size:12px;padding:10px;margin:0 5px 5px;color:#fff;background:#44a4fc;border-left:5px solid #187fe7}.vue-notification.warn{background:#ffb648;border-left-color:#f48a06}.vue-notification.error{background:#e54d42;border-left-color:#b82e24}.vue-notification.success{background:#68cd86;border-left-color:#42a85f}.vn-fade-enter-active,.vn-fade-leave-active,.vn-fade-move{transition:all .5s}.vn-fade-enter,.vn-fade-leave-to{opacity:0}</style><style type="text/css">
.vue-modal-resizer {
  display: block;
  overflow: hidden;
  position: absolute;
  width: 12px;
  height: 12px;
  right: 0;
  bottom: 0;
  z-index: 9999999;
  background: transparent;
  cursor: se-resize;
}
.vue-modal-resizer::after {
  display: block;
  position: absolute;
  content: '';
  background: transparent;
  left: 0;
  top: 0;
  width: 0;
  height: 0;
  border-bottom: 10px solid #ddd;
  border-left: 10px solid transparent;
}
.vue-modal-resizer.clicked::after {
  border-bottom: 10px solid #369be9;
}
</style><style type="text/css">
.v--modal-block-scroll {
  overflow: hidden;
  width: 100vw;
}
.v--modal-overlay {
  position: fixed;
  box-sizing: border-box;
  left: 0;
  top: 0;
  width: 100%;
  height: 100vh;
  background: rgba(0, 0, 0, 0.2);
  z-index: 999;
  opacity: 1;
}
.v--modal-overlay.scrollable {
  height: 100%;
  min-height: 100vh;
  overflow-y: auto;
  -webkit-overflow-scrolling: touch;
}
.v--modal-overlay .v--modal-background-click {
  width: 100%;
  min-height: 100%;
  height: auto;
}
.v--modal-overlay .v--modal-box {
  position: relative;
  overflow: hidden;
  box-sizing: border-box;
}
.v--modal-overlay.scrollable .v--modal-box {
  margin-bottom: 2px;
}
.v--modal {
  background-color: white;
  text-align: left;
  border-radius: 3px;
  box-shadow: 0 20px 60px -2px rgba(27, 33, 58, 0.4);
  padding: 0;
}
.v--modal.v--modal-fullscreen {
  width: 100vw;
  height: 100vh;
  margin: 0;
  left: 0;
  top: 0;
}
.v--modal-top-right {
  display: block;
  position: absolute;
  right: 0;
  top: 0;
}
.overlay-fade-enter-active,
.overlay-fade-leave-active {
  transition: all 0.2s;
}
.overlay-fade-enter,
.overlay-fade-leave-active {
  opacity: 0;
}
.nice-modal-fade-enter-active,
.nice-modal-fade-leave-active {
  transition: all 0.4s;
}
.nice-modal-fade-enter,
.nice-modal-fade-leave-active {
  opacity: 0;
  transform: translateY(-20px);
}
</style><style type="text/css">
.vue-dialog div {
  box-sizing: border-box;
}
.vue-dialog .dialog-flex {
  width: 100%;
  height: 100%;
}
.vue-dialog .dialog-content {
  flex: 1 0 auto;
  width: 100%;
  padding: 15px;
  font-size: 14px;
}
.vue-dialog .dialog-c-title {
  font-weight: 600;
  padding-bottom: 15px;
}
.vue-dialog .dialog-c-text {
}
.vue-dialog .vue-dialog-buttons {
  display: flex;
  flex: 0 1 auto;
  width: 100%;
  border-top: 1px solid #eee;
}
.vue-dialog .vue-dialog-buttons-none {
  width: 100%;
  padding-bottom: 15px;
}
.vue-dialog-button {
  font-size: 12px !important;
  background: transparent;
  padding: 0;
  margin: 0;
  border: 0;
  cursor: pointer;
  box-sizing: border-box;
  line-height: 40px;
  height: 40px;
  color: inherit;
  font: inherit;
  outline: none;
}
.vue-dialog-button:hover {
  background: rgba(0, 0, 0, 0.01);
}
.vue-dialog-button:active {
  background: rgba(0, 0, 0, 0.025);
}
.vue-dialog-button:not(:first-of-type) {
  border-left: 1px solid #eee;
}
</style><style type="text/css" media="screen" class="monaco-colors">.monaco-editor .accessibilityHelpWidget { background-color: #252526; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px #000000; }
.monaco-editor, .monaco-editor-background, .monaco-editor .inputarea.ime-input { background-color: #1e1e1e; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #d4d4d4; }
.monaco-editor .margin { background-color: #1e1e1e; }
.monaco-editor .rangeHighlight { background-color: rgba(255, 255, 255, 0.04); }
.vs-whitespace { color: rgba(227, 228, 226, 0.16) !important; }
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #888888; }
.monaco-editor .monaco-editor-overlaymessage .anchor { border-top-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { border: 1px solid #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { background-color: #063b49; }
.monaco-editor .codelens-decoration { color: #999999; }
.monaco-editor .codelens-decoration > a:hover { color: #4e94ce !important; }
.monaco-editor .findOptionsWidget { background-color: #252526; }
.monaco-editor .findOptionsWidget { box-shadow: 0 2px 8px #000000; }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #515c6a; }
.monaco-editor .findScope { background-color: rgba(58, 61, 65, 0.4); }
.monaco-editor .find-widget { background-color: #252526; }
.monaco-editor .find-widget { box-shadow: 0 2px 8px #000000; }
.monaco-editor .find-widget.no-results .matchesCount { color: #f48771; }
.monaco-editor .find-widget .monaco-sash { background-color: #454545; width: 3px !important; margin-left: -4px;}
.monaco-editor .find-widget .monaco-checkbox .checkbox:checked + .label { border: 1px solid #007acc; }
.monaco-editor .line-numbers { color: #858585; }
.monaco-editor .current-line ~ .line-numbers { color: #c6c6c6; }
.monaco-editor .view-overlays .current-line { border: 2px solid #282828; }
.monaco-editor .margin-view-overlays .current-line-margin { border: 2px solid #282828; }
.monaco-editor .lines-content .cigr { box-shadow: 1px 0 0 0 #404040 inset; }
.monaco-editor .lines-content .cigra { box-shadow: 1px 0 0 0 #707070 inset; }
.monaco-editor .minimap-slider, .monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(121, 121, 121, 0.2); }
.monaco-editor .minimap-slider:hover, .monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active, .monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(191, 191, 191, 0.2); }
.monaco-editor .minimap-shadow-visible { box-shadow: #000000 -6px 0 6px -6px inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #5a5a5a inset; }
.monaco-editor .scroll-decoration { box-shadow: #000000 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: #264f78; }
.monaco-editor .selected-text { background-color: #3a3d41; }
.monaco-editor .cursor { background-color: #aeafad; border-color: #aeafad; color: #515052; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23ea4646'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%234d9e4d'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23008000'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22rgba(238%2C%20238%2C%20238%2C%200.7)%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.showUnused .monaco-editor .squiggly-inline-unnecessary { opacity: 0.667; will-change: opacity; }
.monaco-editor .reference-zone-widget .ref-tree .referenceMatch { background-color: rgba(234, 92, 0, 0.3); }
.monaco-editor .reference-zone-widget .preview .reference-decoration { background-color: rgba(255, 143, 0, 0.6); }
.monaco-editor .reference-zone-widget .ref-tree { background-color: #252526; }
.monaco-editor .reference-zone-widget .ref-tree { color: #bbbbbb; }
.monaco-editor .reference-zone-widget .ref-tree .reference-file { color: #ffffff; }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { background-color: rgba(51, 153, 255, 0.2); }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { color: #ffffff !important; }
.monaco-editor .reference-zone-widget .preview .monaco-editor .monaco-editor-background,.monaco-editor .reference-zone-widget .preview .monaco-editor .inputarea.ime-input {	background-color: #001f33;}
.monaco-editor .reference-zone-widget .preview .monaco-editor .margin {	background-color: #001f33;}
.monaco-editor .goto-definition-link { color: #4e94ce !important; }
.monaco-editor .hoverHighlight { background-color: rgba(38, 79, 120, 0.25); }
.monaco-editor .monaco-editor-hover { background-color: #252526; }
.monaco-editor .monaco-editor-hover { border: 1px solid #454545; }
.monaco-editor .monaco-editor-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .monaco-editor-hover a { color: #3794ff; }
.monaco-editor .monaco-editor-hover code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #888888; }
.monaco-editor .tokens-inspect-widget { border: 1px solid #454545; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #454545; }
.monaco-editor .tokens-inspect-widget { background-color: #252526; }
.monaco-editor .detected-link-active { color: #4e94ce !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #454545; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #252526; }
.monaco-editor .parameter-hints-widget a { color: #3794ff; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor .snippet-placeholder { background-color: rgba(124, 124, 124, 0.3); outline-color: transparent; }
.monaco-editor .finish-snippet-placeholder { background-color: transparent; outline-color: #525252; }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-highlighted-label .highlight { color: #0097fb; }
.monaco-editor .suggest-widget { color: #d4d4d4; }
.monaco-editor .suggest-widget a { color: #3794ff; }
.monaco-editor .suggest-widget code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.07); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.72); }
.monaco-editor .wordHighlightStrong { background-color: rgba(0, 73, 114, 0.72); }
.monaco-diff-editor .diff-review-line-number { color: #858585; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #000000 0 -6px 6px -6px inset; }
.monaco-editor .line-insert, .monaco-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-diff-editor .line-insert, .monaco-diff-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .line-delete, .monaco-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor .line-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #000000; }

.mtk1 { color: #d4d4d4; }
.mtk2 { color: #1e1e1e; }
.mtk3 { color: #cc6666; }
.mtk4 { color: #9cdcfe; }
.mtk5 { color: #ce9178; }
.mtk6 { color: #b5cea8; }
.mtk7 { color: #608b4e; }
.mtk8 { color: #569cd6; }
.mtk9 { color: #dcdcdc; }
.mtk10 { color: #808080; }
.mtk11 { color: #f44747; }
.mtk12 { color: #c586c0; }
.mtk13 { color: #a79873; }
.mtk14 { color: #dd6a6f; }
.mtk15 { color: #5bb498; }
.mtk16 { color: #909090; }
.mtk17 { color: #778899; }
.mtk18 { color: #ff00ff; }
.mtk19 { color: #b46695; }
.mtk20 { color: #ff0000; }
.mtk21 { color: #4f76ac; }
.mtk22 { color: #3dc9b0; }
.mtk23 { color: #74b0df; }
.mtk24 { color: #4864aa; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }</style><style type="text/css" media="screen"></style></head><body><div data-v-14c6c386="" id="app"><div data-v-14c6c386=""><div class="row"><div><div data-v-9fbd9f94="" class="wrapper"><i data-v-9fbd9f94="" class="pointer times fa fa-times fa-lg"></i> <!----> <div data-v-9fbd9f94="" id="fs_control"><div data-v-9fbd9f94="" class="panel panel-default"><div data-v-9fbd9f94="" class="headPanel panel-heading"><div data-v-9fbd9f94="" class="btn-group"><button data-v-9fbd9f94="" id="submit" type="button" class="btn btn-sm btn-run"><i data-v-9fbd9f94="" aria-hidden="true" class="fa fa-play"></i> <span data-v-9fbd9f94=""> Run </span></button> <div data-v-19bffae6="" data-v-9fbd9f94="" class="btn-group"><button data-v-19bffae6="" id="panelLang" type="button" aria-haspopup="true" aria-expanded="false" class="btn btn-sm btn-menu"><span data-v-19bffae6=""> C++ </span> <span data-v-19bffae6="" class="fa fa-caret-down"></span> <i data-v-19bffae6="" aria-hidden="true" class="fa fa-code"></i></button> <ul data-v-19bffae6="" class="dropdown-menu"><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">C</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">C++</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">C#</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">Java</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">Python</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">Python3</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">Javascript</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">NodeJs</span></li><li data-v-19bffae6=""><span data-v-19bffae6="" href="#">Ruby</span></li></ul></div> <button data-v-9fbd9f94="" class="btn btn-sm btn-menu"><a data-v-9fbd9f94="" href="https://ide.codingblocks.com/" class="decoration-none" target="_blank">
            New <i data-v-9fbd9f94="" aria-hidden="true" class="fa fa-file-code-o"></i></a></button> <button data-v-9fbd9f94="" type="button" id="custInp" class="btn btn-sm btn-menu">
            Input <i data-v-9fbd9f94="" aria-hidden="true" class="fa fa-keyboard-o"></i></button> <button data-v-9fbd9f94="" type="button" id="save" class="btn btn-sm btn-menu">Save <i data-v-9fbd9f94="" aria-hidden="true" class="fa fa-floppy-o"></i></button> <button data-v-9fbd9f94="" type="button" id="download" class="btn btn-sm btn-menu">
            Download
            <i data-v-9fbd9f94="" aria-hidden="true" class="fa fa-download"></i></button> <input data-v-9fbd9f94="" type="file" style="display: none;"> <button data-v-9fbd9f94="" type="button" id="uploadFile" class=" btn btn-sm btn-menu">
            Upload <span data-v-9fbd9f94="" aria-hidden="true" class="fa fa-folder-open"></span></button> <input data-v-9fbd9f94="" type="file" id="upload" style="display: none;"> <button data-v-9fbd9f94="" type="button" id="settingButton" class="btn btn-sm btn-menu">
            Setting <span data-v-9fbd9f94="" class="fa fa-cog"></span></button> <div data-v-ab8fa976="" data-v-9fbd9f94="" id="shareId" class="btn-group"><button data-v-ab8fa976="" id="shareButton" type="button" class="btn btn-sm btn-menu">
    Share<i data-v-ab8fa976="" aria-hidden="true" class="fa fa-reply-all"></i></button> <div data-v-ab8fa976="" name="shareModal" style="display: none;"><div data-v-ab8fa976="" class="modal-mask"><div data-v-ab8fa976="" class="modal-wrapper"><div data-v-ab8fa976="" class="modal-container"><div data-v-ab8fa976="" class="modal-header text-center"><h3 data-v-ab8fa976="">Share</h3></div> <div data-v-ab8fa976="" class="modal-body text-center"><div data-v-ab8fa976="" class="shortURLBox"><input data-v-ab8fa976="" id="shareURL" type="url" title="Share Shorten URL" readonly="readonly"> <button data-v-ab8fa976="" type="button" class="btn btn-sm btn-run">Copy!
              </button></div> <div data-v-ab8fa976="" class="socialShareGroup"><span tabindex="0" data-link="mailto:?subject=Here%20is%20my%20code.%20Find%20it%20at%20Coding%20Blocks%20IDE.&amp;body=%0D%0A%0D%0AHere%20is%20my%20code.%20Find%20it%20at%20Coding%20Blocks%20IDE."><span class="socialShare"><i class="fa fa-envelope"></i> Email</span></span> <span tabindex="0" data-link="#share-facebook"><span class="socialShare"><i class="fa fa-facebook"></i> Facebook</span></span> <span tabindex="0" data-link="#share-twitter"><span class="socialShare"><i class="fa fa-twitter"></i> Twitter</span></span></div></div> <div data-v-ab8fa976="" class="modal-footer"><button data-v-ab8fa976="" class="btn btn-run btn-sm">
              Close
            </button></div></div></div></div></div></div> <button data-v-9fbd9f94="" id="panelLang" type="button" class="btn btn-sm btn-menu">
            Shortcuts <i data-v-9fbd9f94="" aria-hidden="true" class="fa fa-reply-all"></i></button></div> <div data-v-9fbd9f94="" class="logoMenu"><button data-v-9fbd9f94="" id="panelLang" type="button" class="btn btn-sm btn-danger">
  Login <i class="fas fa-sign-in-alt"></i></button>
          Made with <i data-v-9fbd9f94="" aria-hidden="true" class="fa fa-heart" style="color: rgb(227, 29, 59);"></i> by
          <img data-v-9fbd9f94="" src="./topic_files/cb_logo_light.686074b.png"></div></div> <div data-v-9fbd9f94="" class="panel-heading second-row">
        Title: <input data-v-9fbd9f94="" type="text" placeholder="Untitled" class="black"></div></div> <div data-v-6614791f="" data-v-9fbd9f94="" class="panel panel-default" style="display: none;"><div data-v-6614791f="" class="headPanel panel-heading" style="border-bottom-width: 0px;"><div data-v-6614791f="" class="btn-group"><b data-v-6614791f="">Font:</b> <select data-v-6614791f=""><option data-v-6614791f="" value="Lucida Console"> Lucida Console </option><option data-v-6614791f="" value="Anonymous Pro"> Anonymous Pro </option><option data-v-6614791f="" value="Courier"> Courier </option><option data-v-6614791f="" value="Droid Sans Mono"> Droid Sans Mono </option><option data-v-6614791f="" value="Inconsolata"> Inconsolata </option><option data-v-6614791f="" value="Source Code Pro"> Source Code Pro </option><option data-v-6614791f="" value="Ubuntu Mono"> Ubuntu Mono </option></select></div> <div data-v-6614791f="" class="btn-group"><b data-v-6614791f="">Size:</b> <select data-v-6614791f=""><option data-v-6614791f="" value="6">6</option><option data-v-6614791f="" value="8">8</option><option data-v-6614791f="" value="10">10</option><option data-v-6614791f="" value="12">12</option><option data-v-6614791f="" value="14">14</option><option data-v-6614791f="" value="16">16</option><option data-v-6614791f="" value="18">18</option><option data-v-6614791f="" value="20">20</option><option data-v-6614791f="" value="22">22</option><option data-v-6614791f="" value="24">24</option><option data-v-6614791f="" value="26">26</option><option data-v-6614791f="" value="28">28</option><option data-v-6614791f="" value="30">30</option><option data-v-6614791f="" value="32">32</option><option data-v-6614791f="" value="34">34</option><option data-v-6614791f="" value="36">36</option><option data-v-6614791f="" value="38">38</option><option data-v-6614791f="" value="40">40</option><option data-v-6614791f="" value="42">42</option><option data-v-6614791f="" value="44">44</option><option data-v-6614791f="" value="46">46</option><option data-v-6614791f="" value="48">48</option><option data-v-6614791f="" value="50">50</option><option data-v-6614791f="" value="52">52</option><option data-v-6614791f="" value="54">54</option><option data-v-6614791f="" value="56">56</option><option data-v-6614791f="" value="58">58</option><option data-v-6614791f="" value="60">60</option><option data-v-6614791f="" value="62">62</option><option data-v-6614791f="" value="64">64</option></select></div> <div data-v-6614791f="" class="btn-group"><b data-v-6614791f="">Theme:</b> <select data-v-6614791f=""><option data-v-6614791f="" value="vs-dark">Visual Studio Dark</option><option data-v-6614791f="" value="vs">Visual Studio</option><option data-v-6614791f="" value="hc-black">High Contract Dark</option></select></div> <ul data-v-6614791f="" class="list-inline panel-actions"><li data-v-6614791f=""><a data-v-6614791f="" href="https://ide.codingblocks.com/#">Reset Defaults</a></li></ul></div></div></div> <!----> <!----></div> <pre data-v-0dd22936="" id="editor" data-keybinding-context="1" data-mode-id="cpp" class="showUnused"><div class="monaco-editor vs-dark focused" data-uri="inmemory://model/1" style="width: 1536px; height: 634px;"><div data-mprt="3" class="overflow-guard" style="width: 1536px; height: 634px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; will-change: transform; top: 0px; height: 854px; width: 50px;"><div class="glyph-margin" style="left: 0px; width: 0px; height: 854px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; width: 50px; font-family: &quot;Ubuntu Mono&quot;; font-weight: normal; font-size: 16px; line-height: 22px; letter-spacing: 0px; height: 854px;"><div style="position:absolute;top:0px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">1</div></div><div style="position:absolute;top:22px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">2</div></div><div style="position:absolute;top:44px;width:100%;height:22px;"><div class="cldr folding" style="left:24px;width:26px;"></div><div class="line-numbers" style="left:0px;width:24px;">3</div></div><div style="position:absolute;top:66px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">4</div></div><div style="position:absolute;top:110px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">6</div></div><div style="position:absolute;top:132px;width:100%;height:22px;"><div class="cldr folding" style="left:24px;width:26px;"></div><div class="line-numbers" style="left:0px;width:24px;">7</div></div><div style="position:absolute;top:154px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">8</div></div><div style="position:absolute;top:176px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">9</div></div><div style="position:absolute;top:198px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">10</div></div><div style="position:absolute;top:88px;width:100%;height:22px;"><div class="current-line" style="width:50px; height:22px;"></div><div class="line-numbers" style="left:0px;width:24px;">5</div></div><div style="position:absolute;top:220px;width:100%;height:22px;"><div class="line-numbers" style="left:0px;width:24px;">11</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs-dark" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 50px; width: 1486px; height: 634px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; will-change: transform; top: 0px; left: 0px;"><div class="view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 1390px;"><div style="position:absolute;top:0px;width:100%;height:22px;"></div><div style="position:absolute;top:22px;width:100%;height:22px;"></div><div style="position:absolute;top:44px;width:100%;height:22px;"></div><div style="position:absolute;top:66px;width:100%;height:22px;"><div class="cigra" style="left:0px;height:22px;width:16px"></div></div><div style="position: absolute; top: 110px; width: 100%; height: 22px;"><div class="cigra" style="left:0px;height:22px;width:16px"></div></div><div style="position: absolute; top: 132px; width: 100%; height: 22px;"><div class="cigra" style="left:0px;height:22px;width:16px"></div></div><div style="position: absolute; top: 154px; width: 100%; height: 22px;"><div class="cigra" style="left:0px;height:22px;width:16px"></div><div class="cigr" style="left:16px;height:22px;width:16px"></div></div><div style="position: absolute; top: 176px; width: 100%; height: 22px;"><div class="cigra" style="left:0px;height:22px;width:16px"></div></div><div style="position: absolute; top: 198px; width: 100%; height: 22px;"></div><div style="position:absolute;top:88px;width:100%;height:22px;"><div class="current-line" style="width:1390px; height:22px;"></div><div class="cigra" style="left:0px;height:22px;width:16px"></div></div><div style="position:absolute;top:220px;width:100%;height:22px;"></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: &quot;Ubuntu Mono&quot;; font-weight: normal; font-size: 16px; line-height: 22px; letter-spacing: 0px; width: 1390px; height: 854px;"><div style="top:0px;height:22px;" class="view-line"><span><span class="mtk8">#include</span><span class="mtk1">&nbsp;</span><span class="mtk8">&lt;</span><span class="mtk5">iostream</span><span class="mtk8">&gt;</span></span></div><div style="top:22px;height:22px;" class="view-line"><span><span class="mtk8">using</span><span class="mtk1">&nbsp;</span><span class="mtk8">namespace</span><span class="mtk1">&nbsp;std</span><span class="mtk9">;</span></span></div><div style="top:44px;height:22px;" class="view-line"><span><span class="mtk8">int</span><span class="mtk1">&nbsp;main</span><span class="mtk9">()</span><span class="mtk1">&nbsp;</span><span class="mtk9">{</span></span></div><div style="top:66px;height:22px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">int</span><span class="mtk1">&nbsp;n</span><span class="mtk9">,</span><span class="mtk1">m</span><span class="mtk9">,</span><span class="mtk1">s</span><span class="mtk9">;</span></span></div><div style="top: 110px; height: 22px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cin</span><span class="mtk9">&gt;&gt;</span><span class="mtk1">n</span><span class="mtk9">&gt;&gt;</span><span class="mtk1">m</span><span class="mtk9">&gt;&gt;</span><span class="mtk1">s</span><span class="mtk9">;</span></span></div><div style="top: 132px; height: 22px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">for</span><span class="mtk9">(</span><span class="mtk1">i</span><span class="mtk9">=</span><span class="mtk6">0</span><span class="mtk9">;</span><span class="mtk1">i</span><span class="mtk9">&lt;</span><span class="mtk1">n</span><span class="mtk9">;</span><span class="mtk1">i</span><span class="mtk9">++){</span></span></div><div style="top: 154px; height: 22px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cin</span><span class="mtk9">&gt;&gt;</span><span class="mtk1">a</span><span class="mtk9">[</span><span class="mtk1">i</span><span class="mtk9">]</span></span></div><div style="top: 176px; height: 22px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk9">}</span></span></div><div style="top: 198px; height: 22px;" class="view-line"><span><span class="mtk9">}</span></span></div><div style="top:88px;height:22px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">int</span><span class="mtk1">&nbsp;a</span><span class="mtk9">[</span><span class="mtk1">n</span><span class="mtk9">];</span></span></div><div style="top:220px;height:22px;" class="view-line"><span><span>&nbsp;</span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"><div class="lightbulb-glyph" title="Show Fixes (Ctrl+.)" widgetid="LightBulbWidget" style="position: absolute; visibility: hidden; max-width: 1390px;"></div></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor " style="height: 22px; top: 88px; left: 104px; font-family: &quot;Ubuntu Mono&quot;; font-weight: normal; font-size: 16px; line-height: 22px; letter-spacing: 0px; display: block; visibility: inherit; width: 1.6px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 1376px; height: 10px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform; width: 1376px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="17" height="792" style="position: absolute; will-change: transform; top: 0px; right: 0px; width: 14px; height: 634px;"></canvas><div role="presentation" aria-hidden="true" class="visible scrollbar vertical" style="position: absolute; width: 14px; height: 634px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 14px; will-change: transform; height: 470px;"></div></div></div><div role="presentation" aria-hidden="true" style="width: 1426px;"></div><textarea data-mprt="6" class="inputarea" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." role="textbox" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-size: 1px; line-height: 22px; top: 88px; left: 154px; width: 1px; height: 1px;"></textarea><div style="position: absolute; top: 0px; left: 0px; width: 0px; height: 0px;"></div><div data-mprt="4" class="overlayWidgets" style="width: 1536px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div class="monaco-editor-hover hidden" aria-hidden="true" role="presentation" widgetid="editor.contrib.modesGlyphHoverWidget" style="position: absolute;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 1426px; width: 96px; height: 634px;"><div class="minimap-shadow-hidden" style="height: 634px;"></div><canvas width="120" height="792" style="position: absolute; left: 0px; width: 96px; height: 633.6px;"></canvas><div class="minimap-slider" style="position: absolute; will-change: transform; width: 96px; top: 0px; height: 46px;"><div class="minimap-slider-horizontal" style="position: absolute; left: 0px; width: 96px; top: 0px; height: 46px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"><div class="monaco-editor rename-box" widgetid="__renameInputWidget" style="height: 22px; box-shadow: rgb(0, 0, 0) 0px 2px 8px; position: absolute; visibility: hidden; max-width: 1536px;"><input class="rename-input" type="text" aria-label="Rename input. Type new name and press Enter to commit." style="font-family: &quot;Ubuntu Mono&quot;; font-weight: normal; font-size: 16px; background-color: rgb(60, 60, 60); color: rgb(204, 204, 204); border-width: 0px; border-style: none;"></div><div class="monaco-editor-hover hidden" tabindex="0" widgetid="editor.contrib.modesContentHoverWidget" style="position: absolute; visibility: hidden; max-width: 1536px;"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-editor-hover-content" style="overflow: hidden; font-size: 16px; line-height: 22px; max-height: 250px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; will-change: transform;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow top-left-corner"></div></div></div><div class="editor-widget suggest-widget" widgetid="editor.widget.suggestWidget" style="position: absolute; visibility: inherit; max-width: 1536px; top: 110px; left: 138px; line-height: 22px;" monaco-visible-content-widget="true"><div class="message" aria-hidden="true" style="display: none; background-color: rgb(37, 37, 38); border-color: rgb(69, 69, 69);"></div><div class="tree" style="background-color: rgb(37, 37, 38); border-color: rgb(69, 69, 69); height: 22px; display: none;" aria-hidden="true"><div class="monaco-list list_id_1 selection-none" role="tree" tabindex="0"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-list-rows" style="overflow: hidden; height: 0px; top: 0px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 0px; height: 0px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform; width: 0px;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute; width: 10px; height: 22px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; will-change: transform; height: 22px;"></div></div></div><style type="text/css" media="screen">.monaco-list.list_id_1:focus .monaco-list-row.focused { background-color: #062f4a; }
.monaco-list.list_id_1:focus .monaco-list-row.focused:hover { background-color: #062f4a; }
.monaco-list.list_id_1:focus .monaco-list-row.selected { background-color: #094771; }
.monaco-list.list_id_1:focus .monaco-list-row.selected:hover { background-color: #094771; }
.monaco-list.list_id_1:focus .monaco-list-row.selected { color: #ffffff; }
.monaco-list.list_id_1:focus .monaco-list-row.selected.focused { background-color: #094771; }
.monaco-list.list_id_1:focus .monaco-list-row.selected.focused { color: #ffffff; }
.monaco-list.list_id_1 .monaco-list-row.focused { background-color:  #062f4a; }
.monaco-list.list_id_1 .monaco-list-row.focused:hover { background-color:  #062f4a; }
.monaco-list.list_id_1 .monaco-list-row.selected { background-color:  #37373d; }
.monaco-list.list_id_1 .monaco-list-row.selected:hover { background-color:  #37373d; }
.monaco-list.list_id_1 .monaco-list-row:hover { background-color:  #2a2d2e; }</style></div></div><div class="details" aria-hidden="true" style="font-size: 16px; font-weight: normal; display: none; background-color: rgb(37, 37, 38); border-color: rgb(69, 69, 69);"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="body" style="overflow: hidden;"><div class="header"><span class="close" title="Read less... (Ctrl+Space)" style="height: 22px; width: 22px;"></span><p class="type" style="font-family: &quot;Ubuntu Mono&quot;;"></p></div><p class="docs"></p></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; will-change: transform;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow top-left-corner"></div></div></div></div></div><div class="context-view" aria-hidden="true" style="display: none;"></div></div></pre></div> <div data-v-0282b029="" id="inoutbox" class="fsHide" style="font-size: 16px; display: none;"><div data-v-0282b029="" class="panel-input panel-default"><div data-v-0282b029="" class="panel-heading"><span data-v-0282b029="">Input</span> <a data-v-0282b029="" id="copy-input"><i data-v-0282b029="" class="fa fa-paperclip"></i></a></div> <textarea data-v-0282b029="" id="test-input" rows="2" wrap="off" placeholder="Specify Input" class="textbox"></textarea></div> <div data-v-0282b029="" class="panel-output panel-default"><div data-v-0282b029="" class="panel-heading"><span data-v-0282b029="">Output</span> <a data-v-0282b029="" id="copy-output"><i data-v-0282b029="" class="fa fa-paperclip"></i></a></div> <pre data-v-0282b029="" id="output"></pre></div></div></div></div> <div data-v-14c6c386="" class="vue-notification-group" style="width: 300px; top: 0px; right: 0px;"><span></span></div></div><script async="" src="./topic_files/js"></script><script>window.dataLayer = window.dataLayer || [];
    function gtag(){dataLayer.push(arguments);}
    gtag('js', new Date());

    gtag('config', 'UA-83327907-12');</script><script type="text/javascript" src="./topic_files/runtime.6b7456a9ce863d3dc1f3.js.download"></script><script type="text/javascript" src="./topic_files/vendor.690d6552109218d766a8.js.download"></script><script type="text/javascript" src="./topic_files/app.0bd0d635677829b593ae.js.download"></script><div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true" style="visibility: visible;">namespace, suggestion</div><div class="monaco-status" role="status" aria-atomic="true"></div></div></body><screen-shader style="display: block; transition: none 0s ease 0s; margin: 0px; padding: 0px; border-radius: 0px; border: none; outline: none; visibility: visible; max-height: none; max-width: none; clip: unset; overflow: visible; opacity: 1;"><!--This is an element that contains all the html for the screen shader extension to work--><div style="display: block; transition: none 0s ease 0s; margin: 0px; padding: 0px; border-radius: 0px; border: none; outline: none; visibility: visible; max-height: none; max-width: none; clip: unset; overflow: visible; opacity: 0; position: fixed; top: -10%; right: -10%; bottom: -10%; left: -10%; width: auto; height: auto; z-index: 2147483646; background: black;"></div><div style="display: block; transition: none 0s ease 0s; margin: 0px; padding: 0px; border-radius: 0px; border: none; outline: none; visibility: visible; max-height: none; max-width: none; clip: unset; overflow: visible; opacity: 0; position: fixed; top: -10%; right: -10%; bottom: -10%; left: -10%; width: auto; height: auto; z-index: 2147483645; background: rgba(255, 147, 41, 0.8); mix-blend-mode: multiply;"></div><style>screen-shader{pointer-events: none !important;}</style><style></style>
<!-- saved from url=(0029)https://ide.codingblocks.com/ -->
<html style="display: block; transition: none 0s ease 0s; margin: 0px; padding: 0px; border-radius: 0px; border: none; outline: none; visibility: visible; max-height: none; max-width: none; clip: unset; overflow: visible; opacity: 1; position: fixed; top: -10%; right: -10%; bottom: -10%; left: -10%; width: auto; height: auto; z-index: -2147483647;"></html><div style="display: block; transition: none 0s ease 0s; margin: 0px; padding: 0px; border-radius: 0px; border: none; outline: none; visibility: visible; max-height: none; max-width: none; clip: unset; overflow: visible; opacity: 1; position: fixed; top: -10%; right: -10%; bottom: -10%; left: -10%; width: auto; height: auto; z-index: -2147483646; background: none 0% 0% / auto repeat scroll padding-box border-box rgb(255, 255, 255);"></div></screen-shader></html>