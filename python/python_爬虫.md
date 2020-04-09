
# 爬虫

## 1 request


```python
import requests
# 得到网页
newsurl = 'https://news.sina.com.cn/china/'
## 获取网页内容
res = requests.get(newsurl)
print(type(res),res)
## 设置编码
res.encoding = 'utf-8'
## 查看编码
print(res.encoding)
## 查看网页内容
print(res.text)

```

    <class 'requests.models.Response'> <Response [200]>
    utf-8
    <!DOCTYPE html>
    <html>
    <head>
        <meta http-equiv="Content-type" content="text/html; charset=utf-8" />
        <title>国内新闻_新闻中心_新浪网</title>
    <meta name="keywords" content="国内时政,内地新闻">
    <meta name="description" content="新闻中心国内频道，纵览国内时政、综述评论及图片的栏目，主要包括时政要闻、内地新闻、港澳台新闻、媒体聚焦、评论分析。">
    <meta name="robots" content="noarchive">
    <meta name="Baiduspider" content="noarchive">
    <meta http-equiv="Cache-Control" content="no-transform">
    <meta http-equiv="Cache-Control" content="no-siteapp">
    <meta name="applicable-device" content="pc,mobile">
    <meta name="MobileOptimized" content="width">
    <meta name="HandheldFriendly" content="true">
    <meta content="always" name="referrer">
        <link rel="mask-icon" sizes="any" href="//www.sina.com.cn/favicon.svg" color="red">
        <!-- 登录 css -->
        <link rel="stylesheet" type="text/css" href="//i.sso.sina.com.cn/css/userpanel/v1/top_account_v2.css">
        <!-- feed css -->
        <link rel="stylesheet" href="//n0.sinaimg.cn/news/china/feed.1.1.7.css" type="text/css" />
        <link rel="stylesheet" href="//news.sina.com.cn/268/2014/0919/bshare_update.css" type="text/css">
    
        <script src='//n.sinaimg.cn/news/libs/jquery-1.11.1.min.js'></script>
        <link href="//simg.sinajs.cn/products/news_finance/2018/pc_china_home/css/index-1edb9c.css" rel="stylesheet">
    </head>
    
    <body><!-- body code begin -->
    
    <!-- SUDA_CODE_START --> 
    <script type="text/javascript"> 
    //<!--
    (function(){var an="V=2.1.16";var ah=window,F=document,s=navigator,W=s.userAgent,ao=ah.screen,j=ah.location.href;var aD="https:"==ah.location.protocol?"https://s":"http://",ay="beacon.sina.com.cn";var N=aD+ay+"/a.gif?",z=aD+ay+"/g.gif?",R=aD+ay+"/f.gif?",ag=aD+ay+"/e.gif?",aB=aD+"beacon.sinauda.com/i.gif?";var aA=F.referrer.toLowerCase();var aa="SINAGLOBAL",Y="FSINAGLOBAL",H="Apache",P="ULV",l="SUP",aE="UOR",E="_s_acc",X="_s_tentry",n=false,az=false,B=(document.domain=="sina.com.cn")?true:false;var o=0;var aG=false,A=false;var al="";var m=16777215,Z=0,C,K=0;var r="",b="",a="";var M=[],S=[],I=[];var u=0;var v=0;var p="";var am=false;var w=false;function O(){var e=document.createElement("iframe");e.src=aD+ay+"/data.html?"+new Date().getTime();e.id="sudaDataFrame";e.style.height="0px";e.style.width="1px";e.style.overflow="hidden";e.frameborder="0";e.scrolling="no";document.getElementsByTagName("head")[0].appendChild(e)}function k(){var e=document.createElement("iframe");e.src=aD+ay+"/ckctl.html";e.id="ckctlFrame";e.style.height="0px";e.style.width="1px";e.style.overflow="hidden";e.frameborder="0";e.scrolling="no";document.getElementsByTagName("head")[0].appendChild(e)}function q(){var e=document.createElement("script");e.src=aD+ay+"/h.js";document.getElementsByTagName("head")[0].appendChild(e)}function h(aH,i){var D=F.getElementsByName(aH);var e=(i>0)?i:0;return(D.length>e)?D[e].content:""}function aF(){var aJ=F.getElementsByName("sudameta");var aR=[];for(var aO=0;aO<aJ.length;aO++){var aK=aJ[aO].content;if(aK){if(aK.indexOf(";")!=-1){var D=aK.split(";");for(var aH=0;aH<D.length;aH++){var aP=aw(D[aH]);if(!aP){continue}aR.push(aP)}}else{aR.push(aK)}}}var aM=F.getElementsByTagName("meta");for(var aO=0,aI=aM.length;aO<aI;aO++){var aN=aM[aO];if(aN.name=="tags"){aR.push("content_tags:"+encodeURI(aN.content))}}var aL=t("vjuids");aR.push("vjuids:"+aL);var e="";var aQ=j.indexOf("#");if(aQ!=-1){e=escape(j.substr(aQ+1));aR.push("hashtag:"+e)}return aR}function V(aK,D,aI,aH){if(aK==""){return""}aH=(aH=="")?"=":aH;D+=aH;var aJ=aK.indexOf(D);if(aJ<0){return""}aJ+=D.length;var i=aK.indexOf(aI,aJ);if(i<aJ){i=aK.length}return aK.substring(aJ,i)}function t(e){if(undefined==e||""==e){return""}return V(F.cookie,e,";","")}function at(aI,e,i,aH){if(e!=null){if((undefined==aH)||(null==aH)){aH="sina.com.cn"}if((undefined==i)||(null==i)||(""==i)){F.cookie=aI+"="+e+";domain="+aH+";path=/"}else{var D=new Date();var aJ=D.getTime();aJ=aJ+86400000*i;D.setTime(aJ);aJ=D.getTime();F.cookie=aI+"="+e+";domain="+aH+";expires="+D.toUTCString()+";path=/"}}}function f(D){try{var i=document.getElementById("sudaDataFrame").contentWindow.storage;return i.get(D)}catch(aH){return false}}function ar(D,aH){try{var i=document.getElementById("sudaDataFrame").contentWindow.storage;i.set(D,aH);return true}catch(aI){return false}}function L(){var aJ=15;var D=window.SUDA.etag;if(!B){return"-"}if(u==0){O();q()}if(D&&D!=undefined){w=true}ls_gid=f(aa);if(ls_gid===false||w==false){return false}else{am=true}if(ls_gid&&ls_gid.length>aJ){at(aa,ls_gid,3650);n=true;return ls_gid}else{if(D&&D.length>aJ){at(aa,D,3650);az=true}var i=0,aI=500;var aH=setInterval((function(){var e=t(aa);if(w){e=D}i+=1;if(i>3){clearInterval(aH)}if(e.length>aJ){clearInterval(aH);ar(aa,e)}}),aI);return w?D:t(aa)}}function U(e,aH,D){var i=e;if(i==null){return false}aH=aH||"click";if((typeof D).toLowerCase()!="function"){return}if(i.attachEvent){i.attachEvent("on"+aH,D)}else{if(i.addEventListener){i.addEventListener(aH,D,false)}else{i["on"+aH]=D}}return true}function af(){if(window.event!=null){return window.event}else{if(window.event){return window.event}var D=arguments.callee.caller;var i;var aH=0;while(D!=null&&aH<40){i=D.arguments[0];if(i&&(i.constructor==Event||i.constructor==MouseEvent||i.constructor==KeyboardEvent)){return i}aH++;D=D.caller}return i}}function g(i){i=i||af();if(!i.target){i.target=i.srcElement;i.pageX=i.x;i.pageY=i.y}if(typeof i.layerX=="undefined"){i.layerX=i.offsetX}if(typeof i.layerY=="undefined"){i.layerY=i.offsetY}return i}function aw(aH){if(typeof aH!=="string"){throw"trim need a string as parameter"}var e=aH.length;var D=0;var i=/(\u3000|\s|\t|\u00A0)/;while(D<e){if(!i.test(aH.charAt(D))){break}D+=1}while(e>D){if(!i.test(aH.charAt(e-1))){break}e-=1}return aH.slice(D,e)}function c(e){return Object.prototype.toString.call(e)==="[object Array]"}function J(aH,aL){var aN=aw(aH).split("&");var aM={};var D=function(i){if(aL){try{return decodeURIComponent(i)}catch(aP){return i}}else{return i}};for(var aJ=0,aK=aN.length;aJ<aK;aJ++){if(aN[aJ]){var aI=aN[aJ].split("=");var e=aI[0];var aO=aI[1];if(aI.length<2){aO=e;e="$nullName"}if(!aM[e]){aM[e]=D(aO)}else{if(c(aM[e])!=true){aM[e]=[aM[e]]}aM[e].push(D(aO))}}}return aM}function ac(D,aI){for(var aH=0,e=D.length;aH<e;aH++){aI(D[aH],aH)}}function ak(i){var e=new RegExp("^http(?:s)?://([^/]+)","im");if(i.match(e)){return i.match(e)[1].toString()}else{return""}}function aj(aO){try{var aL="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";var D="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_=";var aQ=function(e){var aR="",aS=0;for(;aS<e.length;aS++){aR+="%"+aH(e[aS])}return decodeURIComponent(aR)};var aH=function(e){var i="0"+e.toString(16);return i.length<=2?i:i.substr(1)};var aP=function(aY,aV,aR){if(typeof(aY)=="string"){aY=aY.split("")}var aX=function(a7,a9){for(var a8=0;a8<a7.length;a8++){if(a7[a8]==a9){return a8}}return -1};var aS=[];var a6,a4,a1="";var a5,a3,a0,aZ="";if(aY.length%4!=0){}var e=/[^A-Za-z0-9\+\/\=]/g;var a2=aL.split("");if(aV=="urlsafe"){e=/[^A-Za-z0-9\-_\=]/g;a2=D.split("")}var aU=0;if(aV=="binnary"){a2=[];for(aU=0;aU<=64;aU++){a2[aU]=aU+128}}if(aV!="binnary"&&e.exec(aY.join(""))){return aR=="array"?[]:""}aU=0;do{a5=aX(a2,aY[aU++]);a3=aX(a2,aY[aU++]);a0=aX(a2,aY[aU++]);aZ=aX(a2,aY[aU++]);a6=(a5<<2)|(a3>>4);a4=((a3&15)<<4)|(a0>>2);a1=((a0&3)<<6)|aZ;aS.push(a6);if(a0!=64&&a0!=-1){aS.push(a4)}if(aZ!=64&&aZ!=-1){aS.push(a1)}a6=a4=a1="";a5=a3=a0=aZ=""}while(aU<aY.length);if(aR=="array"){return aS}var aW="",aT=0;for(;aT<aS.lenth;aT++){aW+=String.fromCharCode(aS[aT])}return aW};var aI=[];var aN=aO.substr(0,3);var aK=aO.substr(3);switch(aN){case"v01":for(var aJ=0;aJ<aK.length;aJ+=2){aI.push(parseInt(aK.substr(aJ,2),16))}return decodeURIComponent(aQ(aP(aI,"binnary","array")));break;case"v02":aI=aP(aK,"urlsafe","array");return aQ(aP(aI,"binnary","array"));break;default:return decodeURIComponent(aO)}}catch(aM){return""}}var ap={screenSize:function(){return(m&8388608==8388608)?ao.width+"x"+ao.height:""},colorDepth:function(){return(m&4194304==4194304)?ao.colorDepth:""},appCode:function(){return(m&2097152==2097152)?s.appCodeName:""},appName:function(){return(m&1048576==1048576)?((s.appName.indexOf("Microsoft Internet Explorer")>-1)?"MSIE":s.appName):""},cpu:function(){return(m&524288==524288)?(s.cpuClass||s.oscpu):""},platform:function(){return(m&262144==262144)?(s.platform):""},jsVer:function(){if(m&131072!=131072){return""}var aI,e,aK,D=1,aH=0,i=(s.appName.indexOf("Microsoft Internet Explorer")>-1)?"MSIE":s.appName,aJ=s.appVersion;if("MSIE"==i){e="MSIE";aI=aJ.indexOf(e);if(aI>=0){aK=window.parseInt(aJ.substring(aI+5));if(3<=aK){D=1.1;if(4<=aK){D=1.3}}}}else{if(("Netscape"==i)||("Opera"==i)||("Mozilla"==i)){D=1.3;e="Netscape6";aI=aJ.indexOf(e);if(aI>=0){D=1.5}}}return D},network:function(){if(m&65536!=65536){return""}var i="";i=(s.connection&&s.connection.type)?s.connection.type:i;try{F.body.addBehavior("#default#clientCaps");i=F.body.connectionType}catch(D){i="unkown"}return i},language:function(){return(m&32768==32768)?(s.systemLanguage||s.language):""},timezone:function(){return(m&16384==16384)?(new Date().getTimezoneOffset()/60):""},flashVer:function(){if(m&8192!=8192){return""}var aK=s.plugins,aH,aL,aN;if(aK&&aK.length){for(var aJ in aK){aL=aK[aJ];if(aL.description==null){continue}if(aH!=null){break}aN=aL.description.toLowerCase();if(aN.indexOf("flash")!=-1){aH=aL.version?parseInt(aL.version):aN.match(/\d+/);continue}}}else{if(window.ActiveXObject){for(var aI=10;aI>=2;aI--){try{var D=new ActiveXObject("ShockwaveFlash.ShockwaveFlash."+aI);if(D){aH=aI;break}}catch(aM){}}}else{if(W.indexOf("webtv/2.5")!=-1){aH=3}else{if(W.indexOf("webtv")!=-1){aH=2}}}}return aH},javaEnabled:function(){if(m&4096!=4096){return""}var D=s.plugins,i=s.javaEnabled(),aH,aI;if(i==true){return 1}if(D&&D.length){for(var e in D){aH=D[e];if(aH.description==null){continue}if(i!=null){break}aI=aH.description.toLowerCase();if(aI.indexOf("java plug-in")!=-1){i=parseInt(aH.version);continue}}}else{if(window.ActiveXObject){i=(new ActiveXObject("JavaWebStart.IsInstalled")!=null)}}return i?1:0}};var ad={pageId:function(i){var D=i||r,aK="-9999-0-0-1";if((undefined==D)||(""==D)){try{var aH=h("publishid");if(""!=aH){var aJ=aH.split(",");if(aJ.length>0){if(aJ.length>=3){aK="-9999-0-"+aJ[1]+"-"+aJ[2]}D=aJ[0]}}else{D="0"}}catch(aI){D="0"}D=D+aK}return D},sessionCount:function(){var e=t("_s_upa");if(e==""){e=0}return e},excuteCount:function(){return SUDA.sudaCount},referrer:function(){if(m&2048!=2048){return""}var e=/^[^\?&#]*.swf([\?#])?/;if((aA=="")||(aA.match(e))){var i=V(j,"ref","&","");if(i!=""){return escape(i)}}return escape(aA)},isHomepage:function(){if(m&1024!=1024){return""}var D="";try{F.body.addBehavior("#default#homePage");D=F.body.isHomePage(j)?"Y":"N"}catch(i){D="unkown"}return D},PGLS:function(){return(m&512==512)?h("stencil"):""},ZT:function(){if(m&256!=256){return""}var e=h("subjectid");e.replace(",",".");e.replace(";",",");return escape(e)},mediaType:function(){return(m&128==128)?h("mediaid"):""},domCount:function(){return(m&64==64)?F.getElementsByTagName("*").length:""},iframeCount:function(){return(m&32==32)?F.getElementsByTagName("iframe").length:""}};var av={visitorId:function(){var i=15;var e=t(aa);if(e.length>i&&u==0){return e}else{return}},fvisitorId:function(e){if(!e){var e=t(Y);return e}else{at(Y,e,3650)}},sessionId:function(){var e=t(H);if(""==e){var i=new Date();e=Math.random()*10000000000000+"."+i.getTime()}return e},flashCookie:function(e){if(e){}else{return p}},lastVisit:function(){var D=t(H);var aI=t(P);var aH=aI.split(":");var aJ="",i;if(aH.length>=6){if(D!=aH[4]){i=new Date();var e=new Date(window.parseInt(aH[0]));aH[1]=window.parseInt(aH[1])+1;if(i.getMonth()!=e.getMonth()){aH[2]=1}else{aH[2]=window.parseInt(aH[2])+1}if(((i.getTime()-e.getTime())/86400000)>=7){aH[3]=1}else{if(i.getDay()<e.getDay()){aH[3]=1}else{aH[3]=window.parseInt(aH[3])+1}}aJ=aH[0]+":"+aH[1]+":"+aH[2]+":"+aH[3];aH[5]=aH[0];aH[0]=i.getTime();at(P,aH[0]+":"+aH[1]+":"+aH[2]+":"+aH[3]+":"+D+":"+aH[5],360)}else{aJ=aH[5]+":"+aH[1]+":"+aH[2]+":"+aH[3]}}else{i=new Date();aJ=":1:1:1";at(P,i.getTime()+aJ+":"+D+":",360)}return aJ},userNick:function(){if(al!=""){return al}var D=unescape(t(l));if(D!=""){var i=V(D,"ag","&","");var e=V(D,"user","&","");var aH=V(D,"uid","&","");var aJ=V(D,"sex","&","");var aI=V(D,"dob","&","");al=i+":"+e+":"+aH+":"+aJ+":"+aI;return al}else{return""}},userOrigin:function(){if(m&4!=4){return""}var e=t(aE);var i=e.split(":");if(i.length>=2){return i[0]}else{return""}},advCount:function(){return(m&2==2)?t(E):""},setUOR:function(){var aL=t(aE),aP="",i="",aO="",aI="",aM=j.toLowerCase(),D=F.referrer.toLowerCase();var aQ=/[&|?]c=spr(_[A-Za-z0-9]{1,}){3,}/;var aK=new Date();if(aM.match(aQ)){aO=aM.match(aQ)[0]}else{if(D.match(aQ)){aO=D.match(aQ)[0]}}if(aO!=""){aO=aO.substr(3)+":"+aK.getTime()}if(aL==""){if(t(P)==""){aP=ak(D);i=ak(aM)}at(aE,aP+","+i+","+aO,365)}else{var aJ=0,aN=aL.split(",");if(aN.length>=1){aP=aN[0]}if(aN.length>=2){i=aN[1]}if(aN.length>=3){aI=aN[2]}if(aO!=""){aJ=1}else{var aH=aI.split(":");if(aH.length>=2){var e=new Date(window.parseInt(aH[1]));if(e.getTime()<(aK.getTime()-86400000*30)){aJ=1}}}if(aJ){at(aE,aP+","+i+","+aO,365)}}},setAEC:function(e){if(""==e){return}var i=t(E);if(i.indexOf(e+",")<0){i=i+e+","}at(E,i,7)},ssoInfo:function(){var D=unescape(aj(t("sso_info")));if(D!=""){if(D.indexOf("uid=")!=-1){var i=V(D,"uid","&","");return escape("uid:"+i)}else{var e=V(D,"u","&","");return escape("u:"+unescape(e))}}else{return""}},subp:function(){return t("SUBP")}};var ai={CI:function(){var e=["sz:"+ap.screenSize(),"dp:"+ap.colorDepth(),"ac:"+ap.appCode(),"an:"+ap.appName(),"cpu:"+ap.cpu(),"pf:"+ap.platform(),"jv:"+ap.jsVer(),"ct:"+ap.network(),"lg:"+ap.language(),"tz:"+ap.timezone(),"fv:"+ap.flashVer(),"ja:"+ap.javaEnabled()];return"CI="+e.join("|")},PI:function(e){var i=["pid:"+ad.pageId(e),"st:"+ad.sessionCount(),"et:"+ad.excuteCount(),"ref:"+ad.referrer(),"hp:"+ad.isHomepage(),"PGLS:"+ad.PGLS(),"ZT:"+ad.ZT(),"MT:"+ad.mediaType(),"keys:","dom:"+ad.domCount(),"ifr:"+ad.iframeCount()];return"PI="+i.join("|")},UI:function(){var e=["vid:"+av.visitorId(),"sid:"+av.sessionId(),"lv:"+av.lastVisit(),"un:"+av.userNick(),"uo:"+av.userOrigin(),"ae:"+av.advCount(),"lu:"+av.fvisitorId(),"si:"+av.ssoInfo(),"rs:"+(n?1:0),"dm:"+(B?1:0),"su:"+av.subp()];return"UI="+e.join("|")},EX:function(i,e){if(m&1!=1){return""}i=(null!=i)?i||"":b;e=(null!=e)?e||"":a;return"EX=ex1:"+i+"|ex2:"+e},MT:function(){return"MT="+aF().join("|")},V:function(){return an},R:function(){return"gUid_"+new Date().getTime()}};function ax(){var aK="-",aH=F.referrer.toLowerCase(),D=j.toLowerCase();if(""==t(X)){if(""!=aH){aK=ak(aH)}at(X,aK,"","weibo.com")}var aI=/weibo.com\/reg.php/;if(D.match(aI)){var aJ=V(unescape(D),"sharehost","&","");var i=V(unescape(D),"appkey","&","");if(""!=aJ){at(X,aJ,"","weibo.com")}at("appkey",i,"","weibo.com")}}function d(e,i){G(e,i)}function G(i,D){D=D||{};var e=new Image(),aH;if(D&&D.callback&&typeof D.callback=="function"){e.onload=function(){clearTimeout(aH);aH=null;D.callback(true)}}SUDA.img=e;e.src=i;aH=setTimeout(function(){if(D&&D.callback&&typeof D.callback=="function"){D.callback(false);e.onload=null}},D.timeout||2000)}function x(e,aH,D,aI){SUDA.sudaCount++;if(!av.visitorId()&&!L()){if(u<3){u++;setTimeout(x,500);return}}var i=N+[ai.V(),ai.CI(),ai.PI(e),ai.UI(),ai.MT(),ai.EX(aH,D),ai.R()].join("&");G(i,aI)}function y(e,D,i){if(aG||A){return}if(SUDA.sudaCount!=0){return}x(e,D,i)}function ab(e,aH){if((""==e)||(undefined==e)){return}av.setAEC(e);if(0==aH){return}var D="AcTrack||"+t(aa)+"||"+t(H)+"||"+av.userNick()+"||"+e+"||";var i=ag+D+"&gUid_"+new Date().getTime();d(i)}function aq(aI,e,i,aJ){aJ=aJ||{};if(!i){i=""}else{i=escape(i)}var aH="UATrack||"+t(aa)+"||"+t(H)+"||"+av.userNick()+"||"+aI+"||"+e+"||"+ad.referrer()+"||"+i+"||"+(aJ.realUrl||"")+"||"+(aJ.ext||"");var D=ag+aH+"&gUid_"+new Date().getTime();d(D,aJ)}function aC(aK){var i=g(aK);var aI=i.target;var aH="",aL="",D="";var aJ;if(aI!=null&&aI.getAttribute&&(!aI.getAttribute("suda-uatrack")&&!aI.getAttribute("suda-actrack")&&!aI.getAttribute("suda-data"))){while(aI!=null&&aI.getAttribute&&(!!aI.getAttribute("suda-uatrack")||!!aI.getAttribute("suda-actrack")||!!aI.getAttribute("suda-data"))==false){if(aI==F.body){return}aI=aI.parentNode}}if(aI==null||aI.getAttribute==null){return}aH=aI.getAttribute("suda-actrack")||"";aL=aI.getAttribute("suda-uatrack")||aI.getAttribute("suda-data")||"";sudaUrls=aI.getAttribute("suda-urls")||"";if(aL){aJ=J(aL);if(aI.tagName.toLowerCase()=="a"){D=aI.href}opts={};opts.ext=(aJ.ext||"");aJ.key&&SUDA.uaTrack&&SUDA.uaTrack(aJ.key,aJ.value||aJ.key,D,opts)}if(aH){aJ=J(aH);aJ.key&&SUDA.acTrack&&SUDA.acTrack(aJ.key,aJ.value||aJ.key)}}if(window.SUDA&&Object.prototype.toString.call(window.SUDA)==="[object Array]"){for(var Q=0,ae=SUDA.length;Q<ae;Q++){switch(SUDA[Q][0]){case"setGatherType":m=SUDA[Q][1];break;case"setGatherInfo":r=SUDA[Q][1]||r;b=SUDA[Q][2]||b;a=SUDA[Q][3]||a;break;case"setPerformance":Z=SUDA[Q][1];break;case"setPerformanceFilter":C=SUDA[Q][1];break;case"setPerformanceInterval":K=SUDA[Q][1]*1||0;K=isNaN(K)?0:K;break;case"setGatherMore":M.push(SUDA[Q].slice(1));break;case"acTrack":S.push(SUDA[Q].slice(1));break;case"uaTrack":I.push(SUDA[Q].slice(1));break}}}aG=(function(D,i){if(ah.top==ah){return false}else{try{if(F.body.clientHeight==0){return false}return((F.body.clientHeight>=D)&&(F.body.clientWidth>=i))?false:true}catch(aH){return true}}})(320,240);A=(function(){return false})();av.setUOR();var au=av.sessionId();window.SUDA=window.SUDA||[];SUDA.sudaCount=SUDA.sudaCount||0;SUDA.log=function(){x.apply(null,arguments)};SUDA.acTrack=function(){ab.apply(null,arguments)};SUDA.uaTrack=function(){aq.apply(null,arguments)};U(F.body,"click",aC);window.GB_SUDA=SUDA;GB_SUDA._S_pSt=function(){};GB_SUDA._S_acTrack=function(){ab.apply(null,arguments)};GB_SUDA._S_uaTrack=function(){aq.apply(null,arguments)};window._S_pSt=function(){};window._S_acTrack=function(){ab.apply(null,arguments)};window._S_uaTrack=function(){aq.apply(null,arguments)};window._S_PID_="";if(!window.SUDA.disableClickstream){y()}try{k()}catch(T){}})();
    //-->
    </script> 
    <noScript> 
    <div style='position:absolute;top:0;left:0;width:0;height:0;visibility:hidden'><img width=0 height=0 src='//beacon.sina.com.cn/a.gif?noScript' border='0' alt='' /></div> 
    </noScript> 
    <!-- SUDA_CODE_END -->
    
    <!-- SSO_GETCOOKIE_START -->
    <script type="text/javascript">var sinaSSOManager=sinaSSOManager||{};sinaSSOManager.getSinaCookie=function(){function dc(u){if(u==undefined){return""}var decoded=decodeURIComponent(u);return decoded=="null"?"":decoded}function ps(str){var arr=str.split("&");var arrtmp;var arrResult={};for(var i=0;i<arr.length;i++){arrtmp=arr[i].split("=");arrResult[arrtmp[0]]=dc(arrtmp[1])}return arrResult}function gC(name){var Res=eval("/"+name+"=([^;]+)/").exec(document.cookie);return Res==null?null:Res[1]}var sup=dc(gC("SUP"));if(!sup){sup=dc(gC("SUR"))}if(!sup){return null}return ps(sup)};</script>
    <!-- SSO_GETCOOKIE_END -->
    
    <script type="text/javascript">new function(r,s,t){this.a=function(n,t,e){if(window.addEventListener){n.addEventListener(t,e,false);}else if(window.attachEvent){n.attachEvent("on"+t,e);}};this.b=function(f){var t=this;return function(){return f.apply(t,arguments);};};this.c=function(){var f=document.getElementsByTagName("form");for(var i=0;i<f.length;i++){var o=f[i].action;if(this.r.test(o)){f[i].action=o.replace(this.r,this.s);}}};this.r=r;this.s=s;this.d=setInterval(this.b(this.c),t);this.a(window,"load",this.b(function(){this.c();clearInterval(this.d);}));}(/http:\/\/www\.google\.c(om|n)\/search/, "http://keyword.sina.com.cn/searchword.php", 250);</script>
    <!-- body code end -->
    
    
        <!--主导航-->
    <div class="sina-header" id="sina-header">
        <div class="sina-header-inner">
            <div class="sina-nav">
                <ul class="nav-list">
                    <li class="first" data-sudaclick="nav_home_p"><a href="http://www.sina.com.cn/">新浪首页</a></li>
                    <li data-sudaclick="nav_news_p"><a href="http://news.sina.com.cn/">新闻</a></li>
                    <li data-sudaclick="nav_sports_p"><a href="http://sports.sina.com.cn/">体育</a></li>
                    <li data-sudaclick="nav_finance_p"><a href="http://finance.sina.com.cn/">财经</a></li>
                    <li data-sudaclick="nav_ent_p"><a href="http://ent.sina.com.cn/">娱乐</a></li>
                    <li data-sudaclick="nav_tech_p"><a href="http://tech.sina.com.cn/">科技</a></li>
                    <li data-sudaclick="nav_blog_p"><a href="http://blog.sina.com.cn/">博客</a></li>
                    <li data-sudaclick="nav_photo_p"><a href="http://photo.sina.com.cn/">图片</a></li>
                    <li data-sudaclick="nav_zhuanlan_p"><a href="http://zhuanlan.sina.com.cn/">专栏</a></li>
                    <li class="last" data-sudaclick="topnav_more_p"><a href="#" class="more" data-action="dropdown" data-target="more">更多<i class="icon icon-arrow"></i></a></li>
                    <!--鼠标滑过更多<a>标签添加class="sina15-on"-->
                </ul>
                <ul id="more" class="nav-others">
                    <li><a data-sudaclick="nav_auto_p" href="http://auto.sina.com.cn/">汽车</a><a data-sudaclick="nav_edu_p" href="http://edu.sina.com.cn/">教育</a><a data-sudaclick="nav_fashion_p" href="http://fashion.sina.com.cn/">时尚</a><a data-sudaclick="nav_eladies_p" href="http://eladies.sina.com.cn/">女性</a><a data-sudaclick="nav_astro_p" href="http://astro.sina.com.cn/">星座</a><a data-sudaclick="nav_health_p" href="http://health.sina.com.cn/">健康</a></li>
                    <li><a data-sudaclick="nav_leju_p" href="http://www.leju.com/#source=pc_sina_dbdh1&source_ext=pc_sina">房产</a><a data-sudaclick="nav_history_p"  href="http://history.sina.com.cn/">历史</a><a data-sudaclick="nav_video_p" href="http://video.sina.com.cn/">视频</a><a data-sudaclick="nav_collection_p" href="http://collection.sina.com.cn/">收藏</a><a data-sudaclick="nav_baby_p" href="http://baby.sina.com.cn/">育儿</a><a data-sudaclick="nav_book_p" href="http://book.sina.com.cn/">读书</a></li>
                    <li class="nav-others-last"><a data-sudaclick="nav_fo_p" href="http://fo.sina.com.cn/">佛学</a><a data-sudaclick="nav_games_p" href="http://games.sina.com.cn/">游戏</a><a data-sudaclick="nav_travel_p" href="http://travel.sina.com.cn/">旅游</a><a data-sudaclick="nav_mail_p" href="http://mail.sina.com.cn/">邮箱</a><a data-sudaclick="nav_guide_p" href="http://news.sina.com.cn/guide/">导航</a></li>
                </ul>
            </div>
            <!--通行证组件start-->
            <div class="sina-client">
                <div class="sina-client-tl">
                    <a class="more" href="#" data-action="dropdown" data-target="mobileclient">移动客户端<i class="icon icon-arrow"></i></a>
                </div>
                <ul id="mobileclient" class="dropdown">
                    <li><a data-sudaclick="nav_app_weibo_p" href="http://m.sina.com.cn/m/weibo.shtml" target="_blank"><i class="ico-client ico-weibo"></i>新浪微博</a></li>
                    <li><a data-sudaclick="nav_app_news_p" href="http://news.sina.com.cn/m/sinanews.html" target="_blank"><i class="ico-client ico-news"></i>新浪新闻</a></li>
                    <li><a data-sudaclick="nav_app_sports_p" href="http://m.sina.com.cn/m/sinasports.shtml" target="_blank"><i class="ico-client ico-sports"></i>新浪体育</a></li>
                    <li><a data-sudaclick="nav_app_ent_p" href="http://ent.sina.com.cn/app/download/" target="_blank"><i class="ico-client ico-ent"></i>新浪娱乐</a></li>
                    <li><a data-sudaclick="nav_app_finance_p" href="http://finance.sina.com.cn/mobile/comfinanceweb.shtml" target="_blank"><i class="ico-client ico-finance"></i>新浪财经</a></li>
                    <li><a href="http://zhongce.sina.com.cn/about/app" target="_blank" data-sudaclick="nav_app_zhongce_p"><i class="ico-client ico-zhongce"></i>新浪众测</a></li>
                    <li><a data-sudaclick="nav_app_blog_p" href="http://blog.sina.com.cn/lm/z/app/" target="_blank"><i class="ico-client ico-blog"></i>新浪博客</a></li>
                    <li><a data-sudaclick="nav_app_video_p" href="http://video.sina.com.cn/app" target="_blank"><i class="ico-client ico-video"></i>新浪视频</a></li>
                    <li><a data-sudaclick="nav_app_game_p" href="http://games.sina.com.cn/o/kb/12392.shtml" target="_blank"><i class="ico-client ico-games"></i>新浪游戏</a></li>
                    <li><a data-sudaclick="nav_app_weather_p" href="http://m.sina.com.cn/m/weather.shtml" target="_blank"><i class="ico-client ico-weather"></i>天气通</a></li>
                </ul>
            </div>
            <!-- 我的收藏start -->
            <div class="my-favor" id="my_favor" style="display:none;">
                <a data-sudaclick="nav_myfav_p" href="http://my.sina.com.cn/#location=fav" target="_blank"><i></i>我的收藏</a>
            </div>
    
            <!-- 我的收藏end -->
            <div id="SI_User" class="TAP14">
                <div class="ac-rgst"><a data-sudaclick="nav_registered_invalid" href="https://login.sina.com.cn/signup/signup?entry=news" class="msg-link" target="_blank">注册</a></div>
                <div class="ac-login">
                    <div class="ac-login-cnt "><a data-sudaclick="nav_login_invalid" href="#" class=""><span class="thumb"><img src="//i.sso.sina.com.cn/images/login/thumb_default.png"></span><span class="log-links">登录</span></a></div>
                </div>
            </div>
    
        </div>
    </div>
    <!--/主导航-->
    <!--页面顶导 end-->
        <div class="main-content">
            <div class="top-ad" data-sudaclick="ad_top_p">
        <!--顶部通栏 Start-->
        <script>
            (function (d, s, id) {
                var s, n = d.getElementsByTagName(s)[0];
                if (d.getElementById(id)) return;
                s = d.createElement(s);
                s.id = id;
                s.setAttribute('charset', 'utf-8');
                s.src = '//d' + Math.floor(0 + Math.random() * (9 - 0 + 1)) + '.sina.com.cn/litong/zhitou/sinaads/release/sinaads.js';
                n.parentNode.insertBefore(s, n);
            })(document, 'script', 'sinaads-script');
        </script>
        <ins class="sinaads" data-ad-pdps="PDPS000000058096"></ins>
        <script>(sinaads = window.sinaads || []).push({})</script>
        <!--顶部通栏 End-->
    </div>
            <!--
     * Module: 面包削
     * Author: jinping3
     * Date: 2018.03.29
    -->
    <div class="path-search">
        <div class="path">
            <div class="channel-logo"><a data-sudaclick="cnav_logo_news_p" href="http://news.sina.com.cn/"><span>新闻中心</span></a></div>
        </div>
        <div class="search ent-search" id='ent_search' data-sudaclick="cnav_search_p">
            <form action="//search.sina.com.cn/" name="cheadSearchForm" id="all_search" method="get"
                  target="_blank" style="position: relative;">
                <select name="c" id="search_type" style="visibility: hidden;">
                    <option value="news">新闻</option>
                    <option value="img">图片</option>
                    <option value="blog">博客</option>
                    <option value="video">视频</option>
                </select>
                <input type="hidden" name="ie" value="utf-8">
                <div class="search_div">
                    <input type="text" id="search_input" name="q" value="请输入关键词" onfocus="if(this.value == '请输入关键词') this.value = ''" onblur="if(this.value =='') this.value = '请输入关键词'" autocomplete="off">
                    <div class="search_btn_box"><input type="submit" id="search_submit" value=""></div>
                </div>
            </form>
        </div>
    </div>
    <!-- 面包削 search end -->
        </div>
        <div class="main-nav" data-sudaclick="top_channle_nav_p">
        <ul class="main-text">
            <li><a href="http://news.sina.com.cn">首页</a></li>
            <li><a href="http://news.sina.com.cn/china/" target="_blank"  class="current">国内</a></li>
            <li><a href="http://news.sina.com.cn/world/" target="_blank">国际</a></li>
            <!--<li><a href="http://news.sina.com.cn/society/" target="_blank">社会</a></li>-->
    		<li><a href="http://piyao.sina.cn" target="_blank">辟谣</a></li>
            <li><a href="http://mil.news.sina.com.cn/" target="_blank">军事</a></li>
            <li><a href="http://news.video.sina.com.cn/" target="_blank">视频</a></li>
            <li><a href="http://cul.news.sina.com.cn/" target="_blank">文化</a></li>
            <li><a href="http://news.sina.com.cn/vr/" target="_blank">VR视频</a></li>
            <li><a href="http://news.sina.com.cn/opinion/" target="_blank">评论</a></li>
            <li class="none"><a href="http://photo.sina.com.cn/" target="_blank">图片</a></li>
            <!-- <li class="none"><a href="http://games.sina.com.cn/" target="_blank">游戏</a></li> -->
        </ul>
    </div>
        <div class="main-content">
            <div class="left-content">
                <div class="picBox" id="picBox"  data-sudaclick="focuspic_p">
        <ul class="img">
            					<li>
                <a href="http://slide.news.sina.com.cn/c/slide_1_86058_349532.html" target="_blank" title="彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会">
                    <span class="img-span"><img src="//k.sinaimg.cn/n/translate/723/w899h624/20190115/LMPS-hrsechc2707717.jpg/w500h333l8087e.jpg" width="500" height="333" alt="彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会" class="img-hover" /></span>
                    <span class="title">彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会</span>
                </a>
            </li>										<li>
                <a href="http://slide.news.sina.com.cn/c/slide_1_2841_349511.html" target="_blank" title="哈尔滨：可爱企鹅亮相冰雪大世界 萌翻全场">
                    <span class="img-span"><img src="//k.sinaimg.cn/n/news/1_img/vcg/72f96829/225/w1024h801/20190115/oI_D-hrsechc1672546.jpg/w500h333l8072a.jpg" width="500" height="333" alt="哈尔滨：可爱企鹅亮相冰雪大世界 萌翻全场" class="img-hover" /></span>
                    <span class="title">哈尔滨：可爱企鹅亮相冰雪大世界 萌翻全场</span>
                </a>
            </li>										<li>
                <a href="http://slide.news.sina.com.cn/c/slide_1_2841_349472.html" target="_blank" title="旅马大熊猫“靓靓”第二个宝宝迎周岁生日 吃蛋糕模样呆萌">
                    <span class="img-span"><img src="//k.sinaimg.cn/n/news/1_img/vcg/72f96829/107/w1024h683/20190115/zA3o-hrsecha8925557.jpg/w500h333l80fc5.jpg" width="500" height="333" alt="旅马大熊猫“靓靓”第二个宝宝迎周岁生日 吃蛋糕模样呆萌" class="img-hover" /></span>
                    <span class="title">旅马大熊猫“靓靓”第二个宝宝迎周岁生日 吃蛋糕...</span>
                </a>
            </li>					
        </ul>
        <ul>
           <li>
                <a class="btn btn_l" href="javascript:;"></a>
            </li>
            <li >
                <a class="btn btn_r" href="javascript:;"></a>
            </li>
        </ul>
        <div class="titsBox">
            <ul class="num"></ul>
        </div>
    </div>
                <div class="video-box" data-sudaclick="videolist_p">
        <ul>
            			<li>
                <a href="http://video.sina.com.cn/p/news/c/doc/2019-01-16/144669123774.html" target="_blank">
                    <span class="img-span">
                        <img src="//p.ivideo.sina.com.cn/video/276/411/070/276411070.jpg" width="240" height="160" alt="前阿里CEO卫哲：95后一结婚就有六套房子 总有一套是他的" class="img-hover" />
                        <i class="icon-video"></i>
                    </span>
                    <span class="text-span">前阿里CEO卫哲：95后一结婚就有六套房子 总有一套是他的</span>
                </a>
            </li>
    			<li>
                <a href="http://video.sina.com.cn/p/news/c/doc/2019-01-16/143769123773.html" target="_blank">
                    <span class="img-span">
                        <img src="//p.ivideo.sina.com.cn/video/276/409/145/276409145.jpg" width="240" height="160" alt="400斤野猪闯进饭店 民警、森林消防都没辙 最后特警来了……" class="img-hover" />
                        <i class="icon-video"></i>
                    </span>
                    <span class="text-span">400斤野猪闯进饭店 民警、森林消防都没辙 最后特警来了……</span>
                </a>
            </li>
    			<li>
                <a href="http://video.sina.com.cn/p/news/c/doc/2019-01-16/131969123760.html" target="_blank">
                    <span class="img-span">
                        <img src="//p.ivideo.sina.com.cn/video/276/402/480/276402480.jpg" width="240" height="160" alt="习近平时隔近两年再赴雄安" class="img-hover" />
                        <i class="icon-video"></i>
                    </span>
                    <span class="text-span">习近平时隔近两年再赴雄安</span>
                </a>
            </li>
    			<li>
                <a href="http://video.sina.com.cn/p/news/2019-01-16/detail-ihqfskcn7561767.d.html" target="_blank">
                    <span class="img-span">
                        <img src="//p.ivideo.sina.com.cn/video/276/384/935/276384935.jpg" width="240" height="160" alt="陕西省委召开常委会：汲取秦岭违建问题教训 严查腐败问题" class="img-hover" />
                        <i class="icon-video"></i>
                    </span>
                    <span class="text-span">陕西省委召开常委会：汲取秦岭违建问题教训 严查腐败问题</span>
                </a>
            </li>
    
        </ul>
    </div>
            </div>
            <div class="right-content">
                <ul class="news-1"  data-sudaclick="news_p">
                    
    		<li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6509548.shtml" target="_blank">陕西省委原书记赵正永落马 曾与崔永元零距离交锋</a></li>		<li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7433291.shtml" target="_blank">西方终于明白：在这件事上千万别惹中国</a></li>		<li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7512250.shtml" target="_blank">中国对加拿大动真格了 接下来事态发展三种可能</a></li>		<li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6558563.shtml" target="_blank">央视主持人白岩松康辉获国务院特殊奖励</a></li>
                </ul>
                <ul class="news-2"  data-sudaclick="news_p">
                    <li><a href="https://news.sina.com.cn/s/2019-01-16/doc-ihqfskcn7652619.shtml" target="_blank">我国氢弹之父于敏去世享年93岁 曾隐姓埋名28年</a></li>
    <li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6678806.shtml" target="_blank">台军用“充气战车”反大陆侦查 网友：脑子没长进</a></li>
    <li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7608998.shtml" target="_blank">任正非首谈孟晚舟：作为父亲 我觉得亏欠他们</a></li>
    <li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6653448.shtml" target="_blank">陈寅第二次任上海副市长 2017年出任市政法委书记</a></li>
    <li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7605690.shtml" target="_blank">加拿大外长称已经请求中国饶加籍毒贩一命</a></li>
    <li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6640564.shtml" target="_blank">“快鹿系”集资诈骗案宣判 快鹿集团被处罚金15亿</a></li>
    <li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6640422.shtml" target="_blank">加速走近 中俄释放一重要信号</a></li>
    <li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7579575.shtml" target="_blank">&quot;台独&quot;称猪瘟是大陆对台&quot;生化攻击</a></li>
    <li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6619925.shtml" target="_blank">老调重弹 五角大楼报告渲染中国“军事威胁”</a></li>
    <li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6612746.shtml" target="_blank">新动向 中央纪委全会公报的7个“首次”</a></li>
    	<li class="ad" data-sudaclick="ad_news_p">广告：<a href="http://news.sina.com.cn/z/rushizhe/" target="_blank">入市者访谈 杨百万的证券发家路</a></li>
                </ul>
            </div>
        </div>
        <div class="main-content">
            <div class="left-content-1 marBot">
                <div class="switch-box" data-sudaclick="left_picblock_p">
        <div class="tlt">
            <em><a href="http://slide.news.sina.com.cn/c/" target="_blank">图片</a></em>
        </div>
        <div class="switch-text">
            <ul>
                
    					
    						
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_86058_349502.html" target="_blank">
                        <img src="//n.sinaimg.cn/news/1_img/upload/72f96829/664/w880h584/20190115/ZQHs-hrsechc1347031.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">广西龙脊梯田四季美景如画</span>
                    </a>
                </li>								
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_86058_349497.html" target="_blank">
                        <img src="//n.sinaimg.cn/translate/2/w960h642/20190115/X2n1-hrsecha9381678.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">樱木柯南圣斗士 童年经典动漫原稿展捧上一波回忆杀</span>
                    </a>
                </li>								
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_2841_349451.html" target="_blank">
                        <img src="//n.sinaimg.cn/news/1_img/vcg/72f96829/106/w1024h682/20190115/U7w--hrsecha8346998.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">上戏艺考第一天俊男美女齐亮相  考生带“刀枪棍棒”赴...</span>
                    </a>
                </li>								
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_86058_349441.html" target="_blank">
                        <img src="//n.sinaimg.cn/translate/653/w930h523/20190114/d-no-hrsecha7395777.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">中国首个超250米高“空中连廊”幕墙工程合拢</span>
                    </a>
                </li>								
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_2841_349379.html" target="_blank">
                        <img src="//n.sinaimg.cn/news/1_img/vcg/72f96829/7/w1024h583/20190114/g5em-hrpcmqw4921708.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">广西防城港石角海域发现一条布氏鲸鱼尸体 海域水质没有...</span>
                    </a>
                </li>								
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_86058_349350.html" target="_blank">
                        <img src="//n.sinaimg.cn/translate/27/w930h697/20190113/CQft-hrpcmqw3530994.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">广西龙脊梯田景区发生山体崩塌</span>
                    </a>
                </li>								
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_2841_349227.html" target="_blank">
                        <img src="//n.sinaimg.cn/news/transform/200/w600h400/20190112/ZnLY-hrpcmqv5977033.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">国内首座&quot;一次成型&quot;3D打印桥建成 寿命30年</span>
                    </a>
                </li>								
    							 <li>
                    <a href="http://slide.news.sina.com.cn/c/slide_1_86058_349225.html" target="_blank">
                        <img src="//n.sinaimg.cn/news/transform/200/w600h400/20190112/Ul0E-hrpcmqv5916406.jpg" width="150" height="100" alt="" title="">
                        <span class="mask">191名网络诈骗嫌犯从老挝被押解回国</span>
                    </a>
                </li>							
    
            </ul>
        </div>
        <a class="btn-box" target="_blank" href="http://slide.news.sina.com.cn/c/">
            更多
        </a>
    </div>
    			<!--seo start-->
    			<div style="display:none;">
    	<ul>
    		<li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7661087.shtml">廊坊市通报3起违纪违法典型案例</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7660905.shtml">崇左市通报4起扶贫领域腐败和作风问题典型案例</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6702028.shtml">努力为非公经济发展保驾护航访自治区副主席、日喀则市委书记张延清</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6702557.shtml">周亚辉被指区块链项目涉嫌欺诈 昆仑万维回应：纯属诽谤</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6699455.shtml">百年老村旧貌换新颜——从一个山村华丽转身看广东美丽乡村建设</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6699330.shtml">WTCF：2019年全球旅游总人次将达127.6亿</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6698383.shtml">许达哲与省政府参事省文史研究馆馆员座谈</a></li><li><a href="https://news.sina.com.cn/s/2019-01-16/doc-ihqfskcn7652619.shtml">我国氢弹之父于敏去世享年93岁 曾隐姓埋名28年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7653566.shtml">SWIFT将在京设立外商独资企业</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6697195.shtml">驻科技部纪检监察组对科技部系统驻外科技参赞和总代表进行集体廉政谈话</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7651375.shtml">肯尼亚酒店遇袭事件续：暂无中国公民伤亡</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7650541.shtml">陕西省委常委会会议：坚决拥护党中央对赵正永的审查决定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6695321.shtml">未来10天京津冀及周边区域或现2次中至重度污染</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7648790.shtml">社论：整治拥堵 行车记录仪可派上大用场</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6693406.shtml">英国“脱欧”协议遭遇惨败 特蕾莎•梅相位动摇</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6693722.shtml">2019成就梦想之年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7648778.shtml">社论：引入监督阳光 共创食品安全</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6692959.shtml">中国华侨历史博物馆《南北遗韵 灵指相承》展开幕</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6693719.shtml">派驻机构如何履行好监督责任， 如何发挥好应有作用？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7650078.shtml">韩国队主帅：定要赢下中国队 要大胆进攻</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6692371.shtml">人社部：去年职工基本养老保险基金累计结余近5万亿元</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7646690.shtml">人社部：去年职工基本养老保险基金累计结余近5万亿元</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7654821.shtml">民调力压蔡英文将选2020？柯文哲的反应令人意外</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6693240.shtml">人社部:五方面措施促进养老保险制度可持续发展</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-16/doc-ihqfskcn7644043.shtml">事关所有干部 习近平这个内部讲话首次公开</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6693241.shtml">商务部:2019年要将第二届进博会办得更好</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7642403.shtml">【环保局】侯淅珉副省长调研长春市生态环境治理和劣五类断面体治理、水质达标工作</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6686926.shtml">友谊医院通州院区能建档生娃了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6686604.shtml">三年前很多人以为这是“中国的银行” 他们都错了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7648083.shtml">2018年进出口创最好水平 商务部七方面推动外贸发展</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7644379.shtml">珍藏！“习近平文汇”来了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7638703.shtml">月嫂感冒被指传染新生儿致肺炎 北京一月子中心被诉</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7638726.shtml">联通、电信共6家分公司被纳入电信业务经营不良名单</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6687296.shtml">女大学生坐车犯困怀疑被下药 拿刀划伤网约车司机</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7638977.shtml">广州工美行业首届书画展开幕</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7635492.shtml">科技部与国家体育总局签署“科体协同”工作机制合作协议</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7638989.shtml">2018年广东小家电超两成样品抽检不合格</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7639087.shtml">8座古窑藏湖底 明代瓷匠亮手艺</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6680057.shtml">坚决拥护党中央对赵正永涉嫌严重违纪违法进行纪律审查和监察调查的决定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6680001.shtml">云南有多美，我来告诉你”省文旅厅厅长和丽贵：旅游让云南更美好</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7635547.shtml">外媒发布“全球最聪明国家和地区”榜单：中国排第三</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6678909.shtml">村支书卢大刚归乡的13年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7638824.shtml">海关总署：近两万家失信企业被联合惩戒</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6678160.shtml">投票|亚洲杯中韩对决，福将于大宝能否进球？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7632618.shtml">中宣部等发布《县级融媒体中心建设规范》</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7633150.shtml">东直门街道开展慰问快递员志愿活动</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7641331.shtml">女子过马路看手机被罚10元！温州开出首张斑马线“低头族”罚单</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6678806.shtml">台军用“充气战车”反大陆侦查 网友：脑子没长进</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7631273.shtml">有颜很能打？《长安诺》制片人：杨超越有悟性</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6680847.shtml">庆伟书记向全省发出“新年动员令”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6674883.shtml">流感患者要做好自我隔离避免传染给他人</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7629572.shtml">告别就诊卡 西安14家医疗机构可用身份证直接挂号就诊</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6672483.shtml">崛起中国与“撤退中的”美国在这点上对照鲜明</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6672521.shtml">贵州：调整补贴返还标准 多措并举稳岗促就业</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7624952.shtml">华泰证券诉讼案再发酵 天威英利被法院列入失信被执行人</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6670084.shtml">给孩子吃深色蔬菜最护眼 今晚先来盘炝炒甘蓝吧</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6675679.shtml">雄安板块午后直线拉升，汉钟精机直线封板</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6669450.shtml">河南去年GDP突破4.8万亿 省会郑州占比超两成</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7623369.shtml">贝因美称终止“达润协议”不影响2018年业绩预测</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7622025.shtml">广西防城港海域现布氏鲸尸体 官方：无伤痕疑搁浅</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7620279.shtml">台媒:民进党新任秘书长罗文嘉1月16日正式上任</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7629225.shtml">人社部：五措并举 推动养老保险可持续发展</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7618476.shtml">总书记的深情牵挂，新疆疏附县阿亚格曼干村的精准脱贫故事</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7618461.shtml">自治区十三届人大二次会议主席团举行第二次会议</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6663025.shtml">促进民族团结 维护社会稳定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7619280.shtml">2019年制造业会不会受到较大的冲击？工信部回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7614322.shtml">贵州六盘水市发生3.2级地震 震源深度10千米</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7619279.shtml">人社部:大学生就业是重中之重 农民工就业总体稳定</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7615741.shtml">四川旺苍县委书记刘亚洲被查</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6660131.shtml">乘坐网约车需要实名认证吗？近九成网友投票赞成实名乘车</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6658361.shtml">“爱上郑州”全媒体推介活动在伦敦举行</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6664393.shtml">人社部：为农民工更好融入城市分享经济社会发展成果创造条件</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7632546.shtml">浙江出台生态环保干部容错免责意见：不再流血流汗又流泪</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6656214.shtml">新《捉鬼敢死队》将拍，老版启发“大白”造型</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7610920.shtml">2019，东莞强音！</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6656200.shtml">协议遭议会下院高票“否决”，英国脱欧出路到底在哪儿</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7610653.shtml">新京报“攻守道”峰会：长租公寓进入“红海”了吗？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7610622.shtml">正荣地产发行1.5亿美元优先票据 年利率10.5%</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6655785.shtml">外媒:中国对美顺差创纪录 世界忧关税战滞后效应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7610495.shtml">外媒：中国对美顺差再创纪录 世界担忧关税战滞后效应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7608998.shtml">任正非首谈孟晚舟：作为父亲 我觉得亏欠他们</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6653448.shtml">陈寅第二次任上海副市长 2017年出任市政法委书记</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7608118.shtml">京沪对决本赛季第四次上演，首钢人员齐整剑指胜利</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6653183.shtml">林克庆：推动普惠性营商环境新跃升</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6652848.shtml">2018年全国铁路发送货物超40亿吨</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7607328.shtml">常州高新技术产业开发区原党工委书记、管委会主任顾黑郎接受纪律审查和监察调查</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6651994.shtml">农业农村部:春节猪肉供应有保证 存栏量逼预警线</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6651993.shtml">农业农村部回应菜价过山车：市场对接效率低</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6651435.shtml">人社部：农民工就业总体还是稳定的</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7605864.shtml">人社部：加快研究降低社会保险费率的实施方案</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7605690.shtml">加拿大外长称已经请求中国饶加籍毒贩一命</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6649730.shtml">工信部：应该乐观看待2019年的汽车产销形势</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6647863.shtml">人社部：去年职工养老基金结余规模达到5万亿元</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6647484.shtml">英国“脱欧”协议遭下议院否决 反对者上街庆祝</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6647379.shtml">这艘访问上海的韩国军舰上，四百年前那一战处处可见</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6647036.shtml">习近平时隔近两年再赴雄安</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-16/doc-ihqfskcn7599501.shtml">习近平时隔近两年再赴雄安</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6643999.shtml">“快鹿系”集资诈骗案一审宣判：快鹿集团被罚15亿</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7598979.shtml">【人事】陈寅任上海市副市长</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6644665.shtml">今年玉米价格将大幅上涨？ 农业农村部：稳中有升</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6643687.shtml">特雷莎·梅政府面临不信任动议 图斯克：英国应留欧</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6643143.shtml">覃塘法院：男子两小时内接连两次作案</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6642612.shtml">10记三分砍下51分，勇士创史上首节最高得分</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7597484.shtml">额头文眼睛成警方破案线索 男子出狱半月盗窃再被抓</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6648272.shtml">商务部:继续推进自贸区建设 探索建设自由贸易港</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6644041.shtml">上海一中院一审公开宣判“快鹿系”集资诈骗案，快鹿集团犯集资诈骗被判处罚金十五亿</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6643571.shtml">全国首家聚焦精准健康管理专业组织在粤成立</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7598533.shtml">珠海高铁站半个月查获违禁品1318件</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6641552.shtml">商务部：推动尽早出台外商投资法</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6640564.shtml">“快鹿系”集资诈骗案宣判 快鹿集团被处罚金15亿</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6644185.shtml">美国发布中国军力报告：聚焦台湾 渲染大国竞争</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6640422.shtml">加速走近 中俄释放一重要信号</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7603276.shtml">统计局:一线城市房价涨跌互现 二三线城市涨幅回落</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7595078.shtml">知否？知否？梅花村里红梅开</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6640073.shtml">南沙湿地邀你去拍黑脸琵鹭</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7594885.shtml">当社会在关注董明珠能否连任时，究竟在关注什么？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6638873.shtml">一34岁女子假扮特困高中生行骗 被丰台警方拘留</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7593980.shtml">比伯、海莉被爆2月底举行婚礼，双方暂时未回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6638870.shtml">格力电器今换届 董明珠能否连任？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7593290.shtml">西媒赞中国“创意经济”发展迅猛：在全球占据一席之地</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6638539.shtml">佟丽娅脸绘唐妆“美炸” 意蕴单品雕琢古风美人</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7591239.shtml">深圳市关爱行动公益基金会换届 2019年十大关爱项目启动</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7591183.shtml">深圳PM2.5浓度创历史最低 同比下降2微克/立方米</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7591144.shtml">王伟中会见中国建设银行董事长田国立</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7591115.shtml">车企巨头通过连横合纵来应对行业困境</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6636075.shtml">湖北襄阳加快流域中心城市打造 绿色发展带动汉江生态经济带</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7591113.shtml">湖北襄阳加快流域中心城市打造 绿色发展带动汉江生态经济带</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7591105.shtml">车企巨头通过连横合纵来应对行业困境</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6636043.shtml">深交所与深圳广电集团签约 联手传播资本市场正能量</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7591499.shtml">工信部：2019年重点落实汽车、船舶等行业的开放政策</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6643109.shtml">农业农村部：今年下半年猪价上涨的可能性较大</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6637940.shtml">重拳打击保健品欺诈·浙江温州 诈骗套路深 要“套”钱得先套近乎</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7607445.shtml">商务部：尽快提出具有中国特色的自由贸易港政策和制度体系</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7589582.shtml">商务部：今年将重点推进自贸试验区建设和探索自由贸易港</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7588594.shtml">万科非执行董事肖民请辞</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7589276.shtml">中国记协号召全国新闻工作者增强脚力眼力脑力笔力</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6632756.shtml">美称“大陆恐吓台湾” 国台办：内政不容外来势力干涉</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7591776.shtml">台当局以危害安全为由抓陆客 国台办:莫须有的罪</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6631744.shtml">枞阳：坚持严函严询 化存量遏增量</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6636687.shtml">工信部：2019年重点从六个方面推动制造业高质量发展</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7588182.shtml">工信部：2019年重点从六个方面推动制造业高质量发展</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7586528.shtml">助力2019平安春运回家路</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6632065.shtml">去年12月北上广深新房上涨1.3% 二手房降0.3%</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6632169.shtml">非遗条例草案提交审议，推动代表性项目活态传承</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7592999.shtml">工业增速滑出合理区间？工信部:整体运行仍然较好</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7585467.shtml">港媒关注美海军作战部长访华：“坦诚”对话 促进交流</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7586664.shtml">农业农村部：2018年生猪市场受非洲猪瘟影响总体有限</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6630696.shtml">台涉外部门希望CPTPP早日接受台加入 国台办回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7587108.shtml">眼界 | 美空军官方杂志评出2018年最佳空军照片</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7585010.shtml">蒋介石曾孙蒋万安公开支持蔡英文 国台办回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6633474.shtml">蔡英文妄称没有"九二共识" 国台办:反映个人操守</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7583060.shtml">北京今年新增幼儿园学位3万个 5所新建中小学秋季招生</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7584151.shtml">东莞2019年怎么干?一图读懂政府工作报告！干货都在这！</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7594568.shtml">省政府与芬兰国家商务促进局签署合作谅解备忘录</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7583063.shtml">陆客赴高雄人数预计明显增长 国台办：意料之中</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7580594.shtml">知识产权报社论：扎扎实实干好工作 坚定不移推动发展</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7581500.shtml">一切随心｜新京报摄影记者王远征年度作品</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6627618.shtml">贵州省人民政府征兵办公室2019年兵役登记通告</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7586909.shtml">#决胜基本解决执行难#雇工施工不慎摔伤 法官释法终获赔</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7585391.shtml">农业部:猪瘟对市场影响有限 春节前猪价总体稳定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7579344.shtml">【李强一周】上海的“兴奋点”和“发力点”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6627601.shtml">成贵高铁贵州段已铺轨207公里</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7578448.shtml">林周县纪委监委强化周记实制度不断改进工作作风</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6627242.shtml">新党主席称愿与大陆进行政治协商 国台办回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7579452.shtml">2018年12月一线城市商品住宅价格涨跌互现</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7579118.shtml">香港2天现44宗幼儿园流感个案 部分学校已停课</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7579575.shtml">"台独"称猪瘟是大陆对台"生化攻击" 国台办回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6623820.shtml">北京市卫健委主任雷海潮：首都儿科研究所拟在通州建分院</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7577709.shtml">2019年东莞十件民生实事发布，“治堵”首次登上榜首！</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6633688.shtml">农业农村部：玉米库存消化进度超预期，但缺乏大幅上涨基础</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6627607.shtml">贵州省多措并举保障春运</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6621139.shtml">证据缺失，检察官智斗嫌犯追赃</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7576252.shtml">开奔驰宝马，为省停车费买假牌被拘</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7576917.shtml">绿叶制药联手阿斯利康 推进中国内地心血管领域业务</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6621852.shtml">绿叶制药联手阿斯利康 推进中国内地心血管领域业务</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6620980.shtml">中共中国工程院党组召开专题会议传达学习贯彻习近平总书记重要讲话和中纪委三次全会精神</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6621115.shtml">[辽宁]省交通运输厅召开全省交通运输工作会议（图）</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6632190.shtml">商务部:2019年促进形成强大国内市场 提升城乡消费</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6623537.shtml">为43名台民众 国台办斥"陆委会" :总跟台胞对着干</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7575047.shtml">经合组织前高级经济学家：中国经济并不糟糕</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6627616.shtml">贵州高铁运输业高速发展 2018年客运量增长62.7%</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6619925.shtml">老调重弹 五角大楼报告渲染中国“军事威胁”</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6628287.shtml">国台办：民进党当局单方面破坏两岸协商共同政治基础 这是根本症结所在</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7582709.shtml">2019数博会组委会面向全球征集论坛方案</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6623092.shtml">马英九称5月20日后或访问中国大陆 国台办回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7575193.shtml">炫酷！库里生涯三分球分布图，黄色超远射线抢眼</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6669878.shtml">蔡英文"四个必须"与大陆"一国两制"有冲突？国台办回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7586829.shtml">传达学习习近平总书记在十九届中央纪委三次全会上的重要讲话精神</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7587301.shtml">物理法庭搬到了网络空间 互联网法院让诉讼像网购一样便捷</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7587291.shtml">人社部:2019年毕业生农民工退役军人等就业精准施策</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7587258.shtml">2018年铁路货运增量行动成效显著</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7583271.shtml">16人跨境电信诈骗案一审宣判，主犯获刑13年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6632209.shtml">“智慧法院”让诉讼更便捷高效 满足人民群众多元司法需求</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7587293.shtml">工信部:2019年推动制造业发展 扩大汽车船舶行业开放</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7583445.shtml">“福”字不能倒着贴？赶紧跟书法专家学学如何贴“挥春”！</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6669879.shtml">福建省长宣布2019年推进新“四通” 国台办回应</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7576669.shtml">福建积极推进通水、通电、通桥、通气等新“四通” 国台办回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6615115.shtml">湖南交叉巡察与专项巡察同步推进 直面难点破除人情干扰</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6615114.shtml">让巡察“探照灯”照亮“最后一公里”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7570161.shtml">河南鹿邑县十大高风险运输企业公示</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7465322.shtml">华林公司涉嫌组织领导传销 主要负责人被警方控制</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7465396.shtml">华林公司涉嫌组织领导传销 相关责任人已被控制</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6509548.shtml">陕西省委原书记赵正永落马 曾与崔永元零距离交锋</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6507554.shtml">北京市长：提升创新生态 政府的手不能伸得太长</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6507247.shtml">北京副市长殷勇:不是说疏解出去的是北京不需要的</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7463071.shtml">房子降价200万还没人买 这些上市公司挥泪大甩卖</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6506369.shtml">【衡阳市】启动2019“迎新春送温暖”困难群众慰问活动</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7462603.shtml">超美！俄乌演员水下“拔剑打斗” 憋气3分半表演双人舞破纪录</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6507182.shtml">美丽淮阴：乡村振兴画卷徐徐展开 美好生活未来可期</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6506388.shtml">“造城市长”耿彦波卸任 被认为系现实版李达康</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7461704.shtml">1044名澳门保送生获上海交大武大等内地高校录取</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6505056.shtml">赵正永落马早有前兆 秦岭整治专题片透露这个细节</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7459977.shtml">毒贩在华被判死刑 加拿大网友反应比该国总理冷静</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7459347.shtml">哈德森霸气宣称：我就是CBA第一外援</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6511034.shtml">任正非：非常想念女儿 相信将以正义的胜利告终</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6502832.shtml">肯尼亚现爆炸和枪战 使馆正核实有无中国公民伤亡</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6501498.shtml">【益阳市】农村危房改造任务资金全部到位</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6501943.shtml">“委员文化讲坛”再开讲：学习孙子兵法战略思想</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7455792.shtml">【常德市】百余优秀创业代表受表彰</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7456331.shtml">“中生代”开始掌舵省级公安厅</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7455904.shtml">新京报“攻守道”峰会：今年楼市调控政策会松绑吗？</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7455180.shtml">芬兰媒体高度关注尼尼斯托访华与芬中合作</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7455545.shtml">芬兰媒体高度关注尼尼斯托访华与芬中合作</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6499130.shtml">自然资源部重申严禁以政府储备土地违规融资</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7454885.shtml">云南网：“愿去贵州而不是云南”是提醒更是倒逼</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7454529.shtml">市人大代表缪中荣：干细胞移植疗法不具备治疗效果</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7454580.shtml">财政部发改委央行联手释放宏观经济“暖”信号</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6498523.shtml">CBA下一个万分先生？少说再等三年五载</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7454061.shtml">【邵阳市】一人一剧入选国家艺术基金2019年度资助项目立项名单</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6498047.shtml">中老边境地震致云南勐腊472户农房受损</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7454021.shtml">许达哲与省政府参事省文史研究馆馆员座谈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7456327.shtml">东莞两会丨华侨首次列席东莞市人代会</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7453763.shtml">福州男子持刀伤人案续：路人追击近2公里险被捅</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7452875.shtml">《求是》杂志发表习近平总书记重要文章《努力造就一支忠诚干净担当的高素质干部队伍》相关报道</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7451385.shtml">赵正永被查：卷入千亿矿权案 对秦岭违建整治不力</a></li><li><a href="https://news.sina.com.cn/s/2019-01-15/doc-ihqhqcis6495694.shtml">菲参议员：中国为菲大桥提供赠款 无附加任何条件</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7449666.shtml">福特与大众正式联盟，探索商用车及自动驾驶等领域合作</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7449004.shtml">子弹短信变身“聊天宝”，拼多多成合作伙伴</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7449534.shtml">陈元丰走访慰问天津台胞并调研</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6492382.shtml">陈元丰走访慰问天津台胞并调研</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7448494.shtml">《求是》杂志发表习近平文章《努力造就一支忠诚干净担当的高素质干部队伍》</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7446485.shtml">夜读丨这些消费新闻别错过</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7446806.shtml">民主党派中央负责人：发挥优势 助力祖国和平统一</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6489687.shtml">辛识平：向群众身边的“微腐败”亮剑</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6489757.shtml">黄志贤：聚祖国统一之合力 谱民族复兴之新篇</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7445866.shtml">陈云英：弘扬“保钓”光荣传统 续写推进祖国统一崭新篇章</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6489768.shtml">恭喜！哈德森成为CBA第4位，外援首位“万分先生”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6488286.shtml">市民中心里的发布会</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7444552.shtml">学习习近平最新涉台讲话 有关团体负责人忆往昔谈将来</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7444530.shtml">Lady Gaga不再造型雷人，素颜出镜获最佳妆发奖</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6488369.shtml">苏辉：以“一家人”之心做好“家里事”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6490581.shtml">春运临近 铁警在北京三大火车站集中开展安检宣传</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6490585.shtml">旅客将13.5万现金遗落车厢 铁路民警帮助物归原主</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7441895.shtml">清华大学医学院教学医院在厦门长庚揭牌成立</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7442624.shtml">17部门将对文化市场严重失信违法主体及人员惩戒</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7440488.shtml">赵正永被调查 此前未在整治秦岭违建专题片中出现</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6484707.shtml">赛诺菲声明：不受法国厄贝沙坦类降压药召回事件影响</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7440807.shtml">肯尼亚首都内罗毕一酒店发生爆炸和枪击事件</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7440818.shtml">财科院文宗瑜：国企、民企共同发展的关键是中性竞争</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6485155.shtml">万钢：发挥侨海优势 助力祖国统一大业</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6485158.shtml">万鄂湘：发挥对台渊源优势 从“情”字入手做好“人”的工作</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7440340.shtml">2018年小汽车保有量首破2亿辆</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6483820.shtml">嫦娥四号生物实验长出月面第一株嫩芽 还有哪些植物“上过天”？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6484165.shtml">韩剧《宫》、泰剧《天生一对》将翻拍中国版</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6486195.shtml">中国做出这个决定后 加政府指责但网友全面倒戈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7441331.shtml">苏贞昌上任后签署第一份公文：投入百亿上太空</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7439579.shtml">林宥嘉4月成都开唱，邀坂本龙一合作开场音乐</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7439689.shtml">在家布置办公区域，这些误区要避免</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7442366.shtml">彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7439557.shtml">中企接管在菲韩资造船厂是威胁？菲总统府发话</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7439499.shtml">有一种“文体两开花”，叫人忍不住想点赞</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7439165.shtml">新京报“攻守道”峰会：2019年楼市会继续探底吗？</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7442346.shtml">《求是》杂志发表习近平总书记重要文章</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7438641.shtml">大学院长违规招录研究生被处分 仍留原教职遭质疑</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6481947.shtml">中公教育借壳成功 上市公司亚夏汽车将更名</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6481955.shtml">华海药业：两沙坦类原料药的欧洲药典适应性证书被暂停</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6482020.shtml">偏远地区妇女进京学女红 开启手工创业路</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7437737.shtml">新京报“攻守道”峰会：2019年是房企的并购大年吗？</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7436711.shtml">九三学社东北大学基层委员会召开第七次社员大会暨换届选举会议</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7436910.shtml">财务造假、垄断市场、市值缩水，尔康制药要“凉凉”？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7440852.shtml">中援柬金边第三条环城路动工 柬总理开工程车祝贺</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7436795.shtml">上海市委中心组新年首次专题学习聚焦改革开放</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6480391.shtml">上海市委中心组新年首次专题学习聚焦改革开放</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6480563.shtml">北京铁警半个月查获违禁物近3万件</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6482862.shtml">黄明在应急管理部党组会议和部长办公会议上强调：以实际行动落实“两个维护” 求真务实做好应急管理各项工作</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6479416.shtml">人民日报：对违规干预捞取好处等行为坚决抵制</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6483128.shtml">社论：企业“有出有进”提升市场活力</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6499410.shtml">东莞两会丨廖京：加强小区电梯更新维护</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7433291.shtml">西方终于明白：在这件事上千万别惹中国</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7434246.shtml">栗战书会见芬兰总统尼尼斯托</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6499402.shtml">东莞两会丨方植麟：让企业走进校园</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6476679.shtml">卖房变现的企业懵了：上海大楼降1900万 苦寻买家</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6476025.shtml">洪泰基金创始人盛希泰：企业要备足粮草，保持流动性</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-15/doc-ihqfskcn7443641.shtml">习近平:努力造就一支忠诚干净担当的高素质干部队伍</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6532554.shtml">临朐关于加强西山片区生态环境保护治理的通告</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7430982.shtml">习近平对新时代政法工作的这些要求要牢记相关报道</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6474647.shtml">吴昕在综艺中当着父亲面痛哭戳中了观众什么？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6473848.shtml">加拿大对华发“旅行提醒” 中方回应：贼喊说贼</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7436665.shtml">泰州市委书记韩立明：全力打造江苏高质量发展中部支点城市</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7488155.shtml">潍坊昌乐县委理论学习中心组进行集体学习</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6473968.shtml">上海市委中心组新年首次专题学习聚焦改革开放</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7429445.shtml">切赫宣布赛季后退役，202场英超零封创历史</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6472511.shtml">国家药监局连发两道公告：这两类药品说明书得改！</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7428212.shtml">神木矿难幸存者家属：弟弟发生异常后弃车逃生</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6471842.shtml">“少妇280万重金求子” 小伙心动被骗 警方：不能给骗子发“年终奖”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7427903.shtml">蒙牛助理副总裁赵杰军任现代牧业非执行董事</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6471330.shtml">不是伊万卡 下一任世行行长会是谁？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7426968.shtml">耿彦波不再担任太原市长 李晓波提名为太原市长候选人</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6479651.shtml">外媒指责中方对谢伦伯格判决“随意”华春莹：走私毒品该怎么判？</a></li><li><a href="http://slide.news.sina.com.cn/c/slide_1_86058_349532.html">彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7425941.shtml">《小偷家族》日本“奥斯卡”遭遇两大劲敌</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6469459.shtml">陕西省委原书记赵正永涉嫌严重违纪违法被查</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6469647.shtml">统一战线如何开展新时代对台工作?这个会议告诉你</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7424863.shtml">中教控股拟斥2.52亿收购山东泉城大学</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7424735.shtml">陕西省委原书记赵正永被查(图/简历)</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7424287.shtml">北京地铁一号线晚高峰故障 部分列车临时停车超半小时</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6468886.shtml">李克强会见芬兰总统：愿同芬方继续努力 为双边关系注入新动力</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7423937.shtml">男子开导失恋女 对方“以身相许”赖着不走 警方劝解才离开</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7422835.shtml">孙春兰同芬兰总统尼尼斯托共同出席“2019中芬冬季运动年”开幕式</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7423018.shtml">“百灵杯”神逆转，柯洁让聂卫平刮目相看</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7422656.shtml">25字书信9个拼音 6岁儿子给警察爸爸的信让人泪目</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7422885.shtml">北京地铁一号线晚高峰故障 部分列车临时停车超半小时</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6474847.shtml">任正非:华为今年收入增速将低于20% 或遇更多挑战</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7428124.shtml">星光丨不落的星辰，国家主席新年呼唤的名字</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6470012.shtml">彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7420479.shtml">彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6464612.shtml">陈希:把习近平批示落实到组织工作全过程各方面</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7419783.shtml">大满贯首秀止步首轮，李喆自评职业网球“小学生”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6463768.shtml">中组部部长陈希：履行好党和人民赋予的政治责任</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6464866.shtml">孙春兰同芬兰总统尼尼斯托共同出席“2019中芬冬季运动年”开幕式</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6463298.shtml">华春莹:允许外媒旁听庭审也有意见 你们想怎样？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7419833.shtml">靴子落地！深交所发布公告，对长生生物实施重大违法强制退市</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6479811.shtml">小学总务处长每天贪污1.3万 他是如何做到的？</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6466205.shtml">人类在月球上种出植物嫩芽 为月球基地提供基础</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6461478.shtml">贝壳研究院杨现领：楼市最大的风险在于杠杆率不对称</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7417729.shtml">“老国货”再掀复古时髦范儿，这些网红单品你拔草了吗？</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6461025.shtml">彭丽媛同芬兰总统夫人豪吉欧欣赏音乐诗会</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7416614.shtml">栗战书会见芬兰总统尼尼斯托</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7417587.shtml">1.9亿元专项资金被挪用去了哪里？政府“欠薪”背后，这个问题更严重</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7416527.shtml">西安宗教局原局长转非领导职务 其子获资助留学</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6463925.shtml">致命邂逅：温柔“头像”下的陷阱</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7413869.shtml">北京地铁1号线列车因车辆故障致部分列车晚点</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6457946.shtml">北京核心区控规上半年将有重大进展</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7419837.shtml">【全面深化改革这五年】共建“一带一路” 共享开放成果</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7413208.shtml">厅官车牌尾号111显权威，落马进看守所编号又为111</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7412247.shtml">加美等国呼吁中方立即释放被拘加公民 中方回应</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6456732.shtml">李强：坚决做到“两个维护”，坚决贯彻落实党中央决策部署</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6458296.shtml">上海市委书记李强：坚决贯彻落实党中央决策部署</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7412729.shtml">他成“色欲之殇”的典型</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7412700.shtml">中使馆提醒:要遵守墨西哥入境申报和携带物品规定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7419846.shtml">全面推进司法体制改革 维护公平正义 回应人民期待</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6456767.shtml">李晓波任山西太原市代理市长 耿彦波卸任</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7411717.shtml">进京履新，莫高义已任中央纪委国家监委宣传部部长</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6455759.shtml">内蒙古篮协主席巴特尔：别叫主席，不习惯，叫我大巴就行</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7412541.shtml">“一大会址”日记｜哈工程学生：许多人物和事迹带给自己力量</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7411217.shtml">十年之际区块链步入十字路口 需要一场再观察</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6455231.shtml">汪洋、陈敏尔、张德江、俞正声、吴官正送花圈的逝者</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6455742.shtml">重磅 北京核心区控规上半年将有重大进展</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6460501.shtml">颜真卿真迹出借日本 台北故宫今天的回应被骂翻</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410252.shtml">将新时代文明实践中心建成 百姓家门口的服务中心慈善中心信仰中心</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410251.shtml">深刻领会习总书记关于扶贫工作重要论述 不松懈 不跑偏 以更大气力抓好脱贫攻坚</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410250.shtml">坚定不移贯彻习近平强军思想 推动海南国防动员和后备力量建设取得新成绩</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410248.shtml">海口开建生活垃圾分类资源化中心</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454353.shtml">冬日万绿园 鲜花繁似海</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454350.shtml">将新时代文明实践中心建成 百姓家门口的服务中心慈善中心信仰中心</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454352.shtml">海南计划试点开通琼州海峡客运专线</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410249.shtml">突出精品意识统筹推进总部经济 及中央商务区规划建设</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454351.shtml">海口开建生活垃圾分类资源化中心</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454349.shtml">坚定不移贯彻习近平强军思想 推动海南国防动员和后备力量建设取得新成绩</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410247.shtml">深刻领会习总书记关于扶贫工作重要论述 不松懈 不跑偏 以更大气力抓好脱贫攻坚</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410243.shtml">海南计划试点开通琼州海峡客运专线</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454346.shtml">冬日万绿园 鲜花繁似海</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410241.shtml">突出精品意识统筹推进总部经济 及中央商务区规划建设</a></li><li><a href="https://news.sina.com.cn/s/2019-01-15/doc-ihqhqcis6454222.shtml">坚定不移贯彻习近平强军思想 推动海南国防动员和后备力量建设取得新成绩</a></li><li><a href="https://news.sina.com.cn/s/2019-01-15/doc-ihqhqcis6454208.shtml">坚定不移贯彻习近平强军思想 推动海南国防动员和后备力量建设取得新成绩</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6453986.shtml">北京地铁1号线车辆故障 部分列车晚点</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454112.shtml">新华联控股2千万存款被冻结 负债总额超800亿</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6456983.shtml">展望2019| 建交70年之际的中俄： 贸易额创新高，元首外交提升双边关系</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6453648.shtml">阵容、品质都不错，为何这25部剧就是没人看</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6453104.shtml">鹿心社主持召开自治区党委审计委员会第一次会议强调</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7409492.shtml">家暴过也不行！五类人员被禁止在未成年人相关行业工作，10人已被列入“黑名单”</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7414254.shtml">台“监察院”公布弹劾管中闵理由：持续匿名写稿</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7423540.shtml">孟晚舟未被释放 中方：加方必须承担所有严重后果</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7406900.shtml">美剧《汉尼拔》复活？剧情承接《沉默的羔羊》</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7405705.shtml">那只“看起来像雕塑”的狗，动了！</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7410330.shtml">《求是》杂志发表习近平总书记重要文章《努力造就一支忠诚干净担当的高素质干部队伍》</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-15/doc-ihqfskcn7414004.shtml">《求是》将发表习近平重要文章</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6449969.shtml">坚决做到“两个维护”！上海市委常委会传达中央政治局民主生活会精神</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7402876.shtml">厅官车牌尾号111显权威 落马进看守所编号又为111</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6447269.shtml">这位老红军去世 汪洋陈敏尔等以个人名义送花圈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6447037.shtml">省委原副秘书长索贿数百万元 成“色欲之殇”典型</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6446995.shtml">莫高义履新中纪委 曾称不上网的领导不是合格领导</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6446242.shtml">“中国好人”李秀娥：与护理结缘30载矢志不渝  成为中国口腔护理“第一人”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6446714.shtml">近乡情更怯？你怕不是也得了“春节焦虑症”</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6445522.shtml">李克强会见芬兰总统尼尼斯托</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6447213.shtml">红通逃犯转移资产遇电信诈骗 千万资金转200多笔</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6451284.shtml">人民日报评论员：巩固发展反腐败斗争压倒性胜利</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6445037.shtml">宁波一幼儿外出就餐误食有毒物质 商家仍在正常营业</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7399756.shtml">河北石家庄市元氏县发生2.8级地震 震源深度8千米</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6454428.shtml">莫高义调任中央纪委国家监委宣传部部长</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6182129.shtml">福州砍人事件目击者：男子边跑边砍 有老人被砍伤</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6182035.shtml">市政协委员热议营商环境“放管服”  重点关注税费减免</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7137884.shtml">国家最高科技奖获得者钱七虎向家乡捐献800万奖金</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7137937.shtml">俄日开启首轮和平条约问题谈判 目前双方分歧仍严重</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6180981.shtml">张建东：冬奥会场馆今年进入集中建设年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6180583.shtml">加籍毒贩案是施压？环球时报：粗暴轻视中国法律</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6180750.shtml">百亿保健帝国权健，是如何一步步覆灭的？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7135981.shtml">*ST长生：收到深交所重大违法强制退市决定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7135815.shtml">长生生物：收到深交所重大违法强制退市决定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7134682.shtml">首场委员文化讲坛举行 市政协主席吉林现场练习心肺复苏</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6178449.shtml">福州仓山区一男子持水果刀捅伤数人 目前仍在逃</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7138400.shtml">台北故宫半年后要换院长:现任主张“故宫台湾化”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6177752.shtml">福州有人持刀伤人后逃走 警方正在处置</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6181459.shtml">陕西神木矿难致21死 幸存矿工：再也不下煤窑了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7134694.shtml">国务院全体会议讨论《政府工作报告（征求意见稿）》</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6181689.shtml">【微说两会】省政协委员梁洁：蓄势新动能 找准发力点焕发新活力</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6181696.shtml">【微说两会】省政协委员周建农：加快开放步伐 侨联积极作为拓展国际朋友圈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6175716.shtml">建桥教育拟香港上市 成今年首家申请IPO的教育公司</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7137842.shtml">【微说两会】省人大代表秦泗花：为了老百姓安居乐业 持续开展惠民工作</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6177091.shtml">Visa万事达入华进程受阻？央行：从未干预</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6181693.shtml">【微说两会】省人大代表殷强：坚守生态红线 保护好百姓赖以生存的湖泊</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7137841.shtml">【微说两会】省人大代表史静波：释放大运河“黄金水道”功能 再现“运河之都”风采</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6181690.shtml">【微说两会】省人大代表吴知梅：报告亲切有温度 多举措提升农民获得感</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6181694.shtml">【微说两会】省人大代表乔光辉：加大技术创新力度 提升产业创新能力</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7128627.shtml">毛大庆：空间内容运营和共享经济均需要政策支持</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7137844.shtml">【微说两会】省人大代表朱杰：建设乡村“虚拟中药房” 提升基层中医药服务水平</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7126689.shtml">曾参与打击陕西“假记者”的人拟任新职</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6170570.shtml">首钢女篮大胜福建，张云松盼新外援表现更好</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7126421.shtml">王欣新社交产品马桶MT分享链接遭微信屏蔽</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7126425.shtml">推动养老保险三大支柱改革 让市场发挥决定性作用</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6169362.shtml">苏宁5000万美元合资设立基金参与爱康国宾私有化</a></li><li><a href="https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6526569.shtml">夜读：今天你可能错过的新闻都在这里!</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7124970.shtml">取消新股首日涨停板限制能否带来股市活水？</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6169972.shtml">李克强主持国务院全体会议 讨论《政府工作报告（征求意见稿）》</a></li><li><a href="https://news.sina.com.cn/w/2019-01-14/doc-ihqfskcn7124021.shtml">中越举行政府级边界谈判代表团全体会议</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7128344.shtml">加籍毒贩获死刑 “上诉不加刑”为何不适用本案？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7124116.shtml">所有党员干部注意 这26条纪律“高压线”碰不得</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7123706.shtml">一架波音707在伊朗首都德黑兰附近坠毁仅一人生还 黑匣子已找到</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6169817.shtml">习近平同芬兰总统尼尼斯托举行会谈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7123695.shtml">2017年以来北京为2300多名科技人员管理人员落户</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6167707.shtml">巨星血液净化中心在郑州开业 助力大众健康生活</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6165953.shtml">美呼吁联合制裁华为 除英法外其他国家应者寥寥</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6166454.shtml">煤矿机器人要来了:用技术终结“矿难”未必是奢望</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6165172.shtml">人大代表雷军的担忧：每天都在找办公楼</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6165174.shtml">11家公司被出售，2019年中小型旅行社迎“大考”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7120663.shtml">中铁北京局辟谣“复兴号甲醛超标”：系新车气味</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7120680.shtml">2018年动力电池规模达820亿元，同比增长13%</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7133288.shtml">除了谢伦伯格 还有哪些外国毒贩在华被判处死刑？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7121959.shtml">英毒贩曾在华被判死刑 英政府与中国“疯狂谈判”</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6165629.shtml">深圳破产法庭揭牌成立
    刘贵祥出席并讲话相关报道</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7120100.shtml">马云：寄宿制学校是乡村教育的出路</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6164030.shtml">第十二届阿布扎比可持续发展周开幕</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6162662.shtml">新疆克孜勒苏州发生3.8级地震 震源深度6千米</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7118214.shtml">《红色通缉》第五集《筑坝》速览版</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7121461.shtml">习近平同芬兰总统尼尼斯托举行会谈：推动中芬关系行稳致远</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7120113.shtml">新京报：权健华林被查 直销牌照退出机制该启动了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7118034.shtml">社科院教授林维：法院判处谢伦伯格死刑 罚当其罪</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6166996.shtml">习近平举行仪式欢迎芬兰总统访华并同其举行会谈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7118037.shtml">丰台区长王力军：丽泽与金融街将规划交通“快速道”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6161459.shtml">男子在工友处留宿 临走留下一袋“特产汤圆” 工友老婆食后身亡</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6162783.shtml">2018年我国51.5万人次农民工获得法律援助</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7118777.shtml">公安部交管局：全力做好春运交通安保确保出行顺畅</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7116666.shtml">涉嫌走私毒品的加拿大人 为何被重审一审判处死刑</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7116179.shtml">今年财政收入预破六千亿元 “三公”经费再降2％</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7115941.shtml">哥伦比亚男子公路侧空翻躲避车辆结果毫发无损？回应：系剪辑合成</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6160271.shtml">权健束某某等16人被批捕 律师：权健或存关门风险</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6160519.shtml">神木矿难致21死 矿工：之前天天都开安全会</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6160513.shtml">汪洋：坚决攻克深度贫困的堡垒</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7116399.shtml">教育部：六省份部分学校存在大班额大校额问题</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6159793.shtml">美军高官来华这一行程打破惯例 媒体：来“摸底”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7115546.shtml">习近平同芬兰总统尼尼斯托举行会谈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7115382.shtml">夜读丨这些消费新闻别错过</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6159177.shtml">美海军首席武官来华为什么选择南京？和军改有关</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6159675.shtml">李克强主持召开国务院全体会议 讨论《政府工作报告（征求意见稿）》</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6160553.shtml">中国公布这一亮眼数据后 英媒点赞:7年来最棒表现</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6158042.shtml">加拿大籍被告走私毒品获死刑 庭审现场图曝光(图)</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7114225.shtml">北京丰台区长:丽泽与金融街将规划交通“快速道”</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7113924.shtml">北京市政协委员朱敏：应提高早教机构准入门槛</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7116877.shtml">美智库炒作抖音“渗透”:能造成“华为级别”问题</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6158309.shtml">首轮出局，穆雷的最后一次澳网有点不完美</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6162714.shtml">上海超大城市乡村振兴重点方向，今天的领导小组会议明确了</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7113935.shtml">上海超大城市乡村振兴重点方向，今天的领导小组会议明确了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6158294.shtml">聚会喝酒流行的6种混搭，劝你还是别试了</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7115284.shtml">全国人大常委会党组举行会议 学习贯彻习近平总书记重要讲话和中央纪委三次全会精神</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7114285.shtml">专家为促进我国经济高质量发展建言献策</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6159322.shtml">孙春兰在国家冬季运动训练中心调研：扎实备战2022年北京冬奥会</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6157291.shtml">“最不爱学习”的落马厅官 忏悔录错字连篇</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6156840.shtml">大同证券叫停炒股，避开股票质押雷区 资管产品却频踩雷</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7118821.shtml">一图读懂北京市政府工作报告</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7112245.shtml">《白蛇：缘起》有段激情亲密戏，导演说很必要</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7113081.shtml">“中澳关系”高端论坛在京举行 经贸合作值得关注</a></li><li><a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqfskcn7169051.shtml">昌乐举办“迎新春”新时代文明实践社区教育活动</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6156354.shtml">北京监狱开通支付宝存款服务 家属可为狱内亲人存款</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6158373.shtml">李克强主持召开国务院党组会议</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6155709.shtml">2019北美车展开幕，多款重磅新车亮相</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7111622.shtml">条纹、豹纹当道？米兰男装周就要给你点颜色看看！</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7110554.shtml">人民日报:改革发力 让“艺考”回归本位</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6153519.shtml">新华微评：农民工的“辛苦钱”不容拖欠</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6153754.shtml">人民日报评论员：从严治党 下好“先手棋”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6153628.shtml">甘肃公安厅回应女孩在校遭欺凌下体受伤：相关部门正调查</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6153638.shtml">全面二孩政策实施以来，生育保险基金确实增加了压力</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6152439.shtml">面对多重压力中国外贸不仅未下滑 还成功“逆袭”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7107760.shtml">《权力的游戏》最终季预告片透露了哪些秘密？</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6151909.shtml">五大关键词看北京2019年经济社会发展计划</a></li><li><a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6420157.shtml">故宫院长单霁翔：把紫禁城完整地交给下一个600年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6151913.shtml">新能源汽车或迎全面爆发，后续激励政策正在讨论中</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7107772.shtml">预防、初发期治疗 这几张流感中药方请收好</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6151935.shtml">熊猫乳品拟终止挂牌新三板</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7111187.shtml">我国最南端三沙市成立妇联 赵学灵当选主席</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7106709.shtml">《伪装者》升级版烧脑不成，反倒成了一团乱麻</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7106538.shtml">《“大”人物》：电影太“透”，难免失了趣味</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6150734.shtml">纯金歌喉唱《战争与和平》：听觉古老，视觉新潮</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7106512.shtml">3分钟瑜伽下犬式，有效缓解压力与失眠</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6150906.shtml">【独家V观】习近平同芬兰总统共同启动“2019中芬冬季运动年”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6149827.shtml">回天地区24处自备井置换，惠及6万人</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7105632.shtml">世园会中国馆等四大场馆进入布展阶段</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7105621.shtml">保利发展签约金额突破4000亿 同比增长超三成</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7105608.shtml">流感季一直持续到2月前后，疫苗有库存</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6149451.shtml">北京黑臭水体治理工作已经基本完成，下一步做景观提升</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7105188.shtml">联动机制出台后，停车员可更顺畅地协助处理违法停车问题</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6148167.shtml">广汽三菱2018年销量增长23%，今年挑战20%增速</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6148543.shtml">江西九江市政协党组成员古小平接受审查调查</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7103981.shtml">大连中院：谢伦伯格走私冰毒超222千克，系主犯</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6148179.shtml">女童玩耍掉进冰窟 45岁“大个儿”挺身相救 3D还原惊险救援</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6148544.shtml">陕西百吉矿业“1·12”重大事故6名相关责任人被刑事拘留</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6150549.shtml">市场监管总局党组传达学习贯彻习近平总书记重要讲话精神 坚定不移推动全面从严治党向纵深发展</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6147206.shtml">官员一封亲笔信 亲手把自己送上了“红通”</a></li><li><a href="http://slide.news.sina.com.cn/c/slide_1_86058_349441.html">中国首个超250米高“空中连廊”幕墙工程合拢</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6147670.shtml">杨洁篪出席第十二届阿布扎比可持续发展周开幕式暨扎耶德可持续发展奖颁奖典礼</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7101584.shtml">习近平同芬兰总统尼尼斯托举行会谈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6146548.shtml">加拿大籍毒贩被判死刑:走私冰毒超222千克 系主犯</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7105110.shtml">教师法修订调研座谈会召开 保待遇被认为应成重点</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7101816.shtml">Visa、万事达卡入华进程受阻？央行这么说</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7107354.shtml">外交部就波兰拘押华为中国员工等热点答问（实录）</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-14/doc-ihqfskcn7109635.shtml">李克强主持国务院全体会议 讨论政府工作报告(征求意见稿)</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-14/doc-ihqhqcis6153214.shtml">李克强主持召开国务院党组会议：在大是大非面前立场坚定</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6145693.shtml">北京国安冬训葡萄牙，人少有人少的练法</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6147507.shtml">中国登月美国提出多项请求 其中一个还很不好意思</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7101545.shtml">泰国旅游局二度官宣 最终确认免费落地签延至4月30日</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7101452.shtml">加拿大籍被告人谢伦伯格因犯走私毒品罪被判处死刑</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7101457.shtml">美同意向台输出潜艇技术 中方：敦促有关国家认清此事危害性</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7099447.shtml">加拿大籍被告人谢伦伯格因犯走私毒品罪被判死刑</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7101872.shtml">浙江省委宣传部副部长琚朝晖拟任正厅领导职务</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6143962.shtml">第74集团军新任军长亮相 曾率部在抗战胜利日受阅</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6142035.shtml">教育部：加快教师法修订 完善教师待遇保障机制</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6141617.shtml">陕西神木百吉煤矿事故 6名企业责任人被刑拘</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7095838.shtml">陕西神木矿难造成21人遇难 6名企业责任人被刑拘</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7096354.shtml">6连板后新疆交建上演天地板，公司：未开展燃料电池业务</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7099742.shtml">两自治区同日补缺公安厅厅长 其中一人系“空降”</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6140356.shtml">电梯突发故障 温州两名8岁小朋友“教科书式”自救！</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6146830.shtml">习近平同芬兰总统尼尼斯托举行会谈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6140117.shtml">给总司令当过勤务兵的老人去世 省委书记三鞠躬</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7100254.shtml">美国军工企业将向台湾“潜艇国造”项目输出技术 中方回应</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6139427.shtml">央视著名主持人张羽已跳槽</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7095058.shtml">市委书记公示两月未上任 今天官宣被查</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6139336.shtml">媒体:支付宝微信备付金集中存管 我们的钱更安全</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6144462.shtml">【开年放大招】六部长邀你入群聊大事</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6141005.shtml">云南3名官员花式围猎中接连落马 有这个共同点</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6138844.shtml">印度将迎来最盛大朝圣节日，预计1.2亿人恒河沐浴</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7094532.shtml">中国田协对徐佚豪等5名跑者追加处罚并禁赛两年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6138013.shtml">澳网第56胜追平名宿，“升级版”的纳达尔回来了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6138134.shtml">“趵突泉养海豹”被责令整改:虽合规但管理不到位</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7100261.shtml">国家航天局：嫦娥四号工作正常 深空探测拉开序幕</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6137516.shtml">“阿丽塔”一只眼睛的像素要高过“咕噜”全身</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7098244.shtml">习近平举行仪式欢迎芬兰总统访华</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7098242.shtml">习近平同芬兰总统共同出席“2019中芬冬季运动年”启动仪式</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6142443.shtml">中国关工委：发挥“五老”余热 关爱下一代青少年</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7092700.shtml">北京大搬家40万人奔通州：以后去通州才是去北京</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7091900.shtml">为有源头活水来</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-14/doc-ihqhqcis6138147.shtml">习近平举行仪式欢迎芬兰总统访华</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7098243.shtml">习近平同芬兰总统尼尼斯托举行会谈</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6142440.shtml">全国高校：夯实党建基础 强化思政实效</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6135893.shtml">冬季风暴袭击美国及欧洲地区 至少30人丧生</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7098247.shtml">2018年我国外贸进出口同比增9.7% 创历史新高</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7092558.shtml">中美再次签署限制进口中国文物政府间谅解备忘录</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7090985.shtml">“最不爱学习”的落马厅官，忏悔录错字连篇</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7091056.shtml">“大表姐”雨衣造型霸气侧漏 “假皮革”看来还能火三季</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6134543.shtml">鹏辉能源入局电池回收、共享出行，加速多领域布局</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7091195.shtml">上海超大城市乡村振兴重点方向，今天的领导小组会议明确了</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6133863.shtml">云南西双版纳发生3.1级地震 震源深度11千米</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6134565.shtml">红通逃犯落网那天，他一夜白头</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6140043.shtml">波兰拘押华为中国员工 外交部连答6问</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6137903.shtml">农业农村部：北京市通州区非洲猪瘟疫区解除封锁</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7090596.shtml">奚梦瑶：模特就是个工具，孤独感比演员还重</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6134591.shtml">央视著名主持人张羽已跳槽</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-14/doc-ihqfskcn7094006.shtml">习近平同芬兰总统尼尼斯托举行会谈</a></li><li><a href="https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6520613.shtml">点视频 | 江苏省第十三届人民代表大会第二次会议隆重开幕</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6132921.shtml">通化东宝“智能”降糖药注册申请获受理</a></li><li><a href="https://news.sina.com.cn/c/xl/2019-01-14/doc-ihqhqcis6138390.shtml">司法部学习贯彻习近平在十九届中央纪委三次全会上的重要讲话精神</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6132251.shtml">外交部：敦促有关方面停止对中国企业无端造谣和无理打压</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqhqcis6131664.shtml">栗战书主持全国人大常委会党组会议:从知行合一角度审视自己</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7087295.shtml">莲石路潮汐车道今日晚高峰启用，进京方向出现拥堵</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6131607.shtml">京杭“双总部”后 小桔车服独立App上线</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7087398.shtml">台故宫文物从不来大陆 《祭侄文稿》为何送日展览</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6131638.shtml">林语堂：不满胡适宋子文“磕头式外交”，上书蒋介石</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6130245.shtml">墨玉县卫浴洁具采购项目（二次）中标公示</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7085912.shtml">墨玉县窗帘及床上用品、一次性用品采购项目（三次）</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7085901.shtml">墨玉县窗帘及床上用品、一次性用品采购项目（二次）废标公示</a></li><li><a href="https://news.sina.com.cn/o/2019-01-14/doc-ihqfskcn7085841.shtml">这5个字不一般 破天荒写入省政府工作报告</a></li><li><a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7085437.shtml">繁荣夜间经济，也是促进消费升级</a></li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7150139.shtml" target="_blank"  title="这次判决 有一个重要信息传递给加拿大和西方">这次判决 有一个重要信息传递给加拿大和西方</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7179202.shtml" target="_blank"  title="GDP破万亿人口上千万 这省会官宣:请喊我特大城市">GDP破万亿人口上千万 这省会官宣:请喊我特大城市</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6256073.shtml" target="_blank"  title="是谁不打招呼的看望 让刘国梁十分意外(图)">是谁不打招呼的看望 让刘国梁十分意外(图)</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7170241.shtml" target="_blank"  title="想凭“不独不统”赢2020？ 国民党别忘了这二字">想凭“不独不统”赢2020？ 国民党别忘了这二字</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7198527.shtml" target="_blank"  title="月面首株嫩芽 嫦娥四号完成人类首次月面生物实验">月面首株嫩芽 嫦娥四号完成人类首次月面生物实验</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6288667.shtml" target="_blank"  title="蔡英文首度表态争连任 岛内大喊：台湾完蛋了">蔡英文首度表态争连任 岛内大喊：台湾完蛋了</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7333076.shtml" target="_blank"  title="加总理称中国随意判决死刑 中方:加方缺法治精神">加总理称中国随意判决死刑 中方:加方缺法治精神</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6271667.shtml" target="_blank"  title="港媒：香港前特首曾荫权服刑期满 已于15日出狱">港媒：香港前特首曾荫权服刑期满 已于15日出狱</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/o/2019-01-15/doc-ihqhqcis6186887.shtml" target="_blank"  title="十省份2018年GDP数据出炉 首现“9万亿俱乐部”">十省份2018年GDP数据出炉 首现“9万亿俱乐部”</a>
    			</li>			<li>
    				<a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6333585.shtml" target="_blank"  title="仅1周国家奖励的800万就这样“花”了 网友却点赞">仅1周国家奖励的800万就这样“花”了 网友却点赞</a>
    			</li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7150139.shtml" target="_blank"  title="这次判决 有一个重要信息传递给加拿大和西方">这次判决 有一个重要信息传递给加拿大和西方</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7054368.shtml" target="_blank"  title="为什么中国雷达专家能拿800万奖金？俄媒这样说">为什么中国雷达专家能拿800万奖金？俄媒这样说</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6147507.shtml" target="_blank"  title="中国登月美国提出多项请求 其中一个还很不好意思">中国登月美国提出多项请求 其中一个还很不好意思</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7099447.shtml" target="_blank"  title="加拿大籍被告人谢伦伯格因犯走私毒品罪被判死刑">加拿大籍被告人谢伦伯格因犯走私毒品罪被判死刑</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6140117.shtml" target="_blank"  title="给总司令当过勤务兵的老人去世 省委书记三鞠躬">给总司令当过勤务兵的老人去世 省委书记三鞠躬</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7333076.shtml" target="_blank"  title="加总理称中国随意判决死刑 中方:加方缺法治精神">加总理称中国随意判决死刑 中方:加方缺法治精神</a>
                </li>            <li>
                    <a href="http://slide.news.sina.com.cn/slide_1_2841_349458.html" target="_blank"  title="加拿大籍男子因犯走私毒品罪被判处死刑">加拿大籍男子因犯走私毒品罪被判处死刑</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqhqcis6165953.shtml" target="_blank"  title="美呼吁联合制裁华为 除英法外其他国家应者寥寥">美呼吁联合制裁华为 除英法外其他国家应者寥寥</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/o/2019-01-13/doc-ihqhqcis5833444.shtml" target="_blank"  title="人民日报评论员：勇于直面问题 不断自我革命">人民日报评论员：勇于直面问题 不断自我革命</a>
                </li>            <li>
                    <a href="https://news.sina.com.cn/c/2019-01-14/doc-ihqfskcn7121959.shtml" target="_blank"  title="英毒贩曾在华被判死刑 英政府与中国“疯狂谈判”">英毒贩曾在华被判死刑 英政府与中国“疯狂谈判”</a>
                </li>	</ul>
    </div>
    			<!--seo end-->
                <div class="js-feed-cont" id="feed_cont"></div>
            </div>
            <div class="right-content-1">
                <div class="news-rank">
        <div class="tlt"  data-sudaclick="ranklist_news_p">
            <em><a href="http://news.sina.com.cn/hotnews/" target="_blank">新闻排行</a></em>
        </div>
        <div class="news-rank-content">
            
            <div class="news-rank-conb1">
                <div class="news-tlt">
                    <a href="javascript:void(0);"  data-sudaclick="rankliranklist_news_today_click_i" target="_blank" class="news-tlt-nav current"><i class="angle"></i>点击排行</a>
                    <a href="javascript:void(0);"  data-sudaclick="ranklist_news_today_comment_i" target="_blank" class="news-tlt-nav"><i class="angle"></i>评论排行</a>
    				<span class="slash"></span>
                </div>
                <ul class="hot-news-ul" data-sudaclick="ranklist_today_comment_items_p">
    				
                </ul>
                <ul class="hot-news-ul hiden" data-sudaclick="ranklist_news_comment_hotitems_p">
    				
                </ul>
            </div>
            
        </div>
    </div>
    
    
    
                <!-- 底部导航 start -->
    <div class="footer_box">
        <div class="view-module">
            <span class="view-phone marginTop24"><a href="http://news.sina.com.cn/feedback/post.html" target="_blank"><i class="icon-pen"></i>新浪新闻意见反馈留言板 </a></span>
            <span class="view-phone"><i class="icon-phone"></i>400-690-0000  欢迎批评指正</span>
        </div>
        <div class="nav-link-box" data-sudaclick="footer_p">
            <ul>
                <li>
                    <a href="http://corp.sina.com.cn/chn/sina_index.html" target="_blank">新浪简介</a>
                    <span>|</span>
                    <a href="http://emarketing.sina.com.cn/" target="_blank">广告服务</a>
                    <span>|</span>
                    <a href="http://corp.sina.com.cn/eng/sina_index_eng.htm" target="_blank">About Sina</a>
                </li>
                <li>
                    <a href="http://www.sina.com.cn/contactus.html" target="_blank">联系我们</a>
                    <span>|</span>
                    <a href="http://career.sina.com.cn/" target="_blank">招聘信息</a>
                    <span>|</span>
                    <a href="http://login.sina.com.cn/signup/signup" target="_blank">通行证注册</a>
                </li>
                <li>
                    <a href="http://help.sina.com.cn/" target="_blank">产品答疑</a>
                    <span>|</span>
                    <a href="http://corp.sina.com.cn/lawfirm/sina.htm" target="_blank">网站律师</a>
                    <span>|</span>
                    <a href="http://english.sina.com/" target="_blank">SINA English</a>
                </li>
            </ul>
    
        </div>
        <div class="report-infor">
            <p>违法和不良信息举报电话：010-62675637<br/>
            举报邮箱：jubao@vip.sina.com</p>
        </div>
        <div class="copy-right">
            <p>Copyright © 1996-2019 SINA Corporation</p>
            <p>All Rights Reserved  新浪公司 <a href="https://corp.sina.com.cn/chn/copyright.html" target="_blank">版权所有</a> </p>
        </div>
    </div>
            </div>
        </div>
        <!-- 正文页浮层 -->
    <div class="page-right-bar">
        <span class="fbr-box fbr-down">
            <span class="fbr-pic" id="weixinPic">
                <img src="//n2.sinaimg.cn/ent/home1704/images/pages/fbr-ewm.png" width="65" height="65" data-echo="//n2.sinaimg.cn/ent/home1704/images/pages/fbr-ewm.png" alt="">
    
                <img src="//n.sinaimg.cn/tech/index_v17/xinwen_fix.png" class="weixin_big">
    
                <span class="fbr-title" id="weixinTitle">下载<i>新浪新闻</i></span>
            </span>
    
        </span>
        <a class="right-bar-btn fbr-pic" id="weixinText" href="javascript:void(0);" data-sudaclick="float_newsapp_i">
            新浪新闻App
        </a>
        <img src="//n.sinaimg.cn/tech/index_v17/xinwen_fix.png" class="weixin_big1">
        <!-- <a href="javascript" data-sudaclick="float_home_p" node-type="toHome" class='right-bar-btn btn-home'>>新浪新闻客户端</a> -->
        <a href="http://news.sina.com.cn/feedback/post.html" target="_blank" data-sudaclick="float_feedback_p" class="right-bar-btn">
            <div class=" btn-survey"></div>
            <p>意见反馈</p>
        </a>
       <a data-sudaclick="float_survey_p" node-type="sittingA" class="right-bar-btn sittingA"></a>
        <a href="javascript:;" data-sudaclick="float_top_i" node-type="toTop" class='right-bar-btn fadeOut'>
            <div class="btn-toTop"></div>
            <p>返回顶部</p>
        </a>
    </div>
        <!--对联广告 20150909 15:10:00 leitao Start-->
        <ins class="sinaads" data-ad-pdps="PDPS000000058097" data-ad-type="float"></ins>
        <script>(sinaads = window.sinaads || []).push({
            params : {
                sinaads_float_show_pos: 800,
                sinaads_float_top : 46
            }
        });
        </script>
        <!--对联广告 20150909 15:10:00 leitao End-->
        <!-- start dmp -->
        <script type="text/javascript">
        (function(d, s, id) {
        var n = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
        s = d.createElement(s);
        s.id = id;
        s.setAttribute('charset', 'utf-8');
        s.src = '//d' + Math.floor(0 + Math.random() * (8 - 0 + 1)) + '.sina.com.cn/litong/zhitou/sinaads/src/spec/sinaads_ck.js';
        n.parentNode.insertBefore(s, n);
        })(document, 'script', 'sinaads-ck-script');
        </script>
        <!-- end dmp -->
        <script type="text/javascript" src="//tech.sina.com.cn/js/717/20140827/index2014/top.js" charset="gb2312"></script>
        <script language='javascript' charset='utf-8' src='//i.sso.sina.com.cn/js/ssologin.js'></script>
        <script type="text/javascript" src="//i.sso.sina.com.cn/js/outlogin_layer.js" charset="utf-8"></script>
        <script type="text/javascript" src="//i.sso.sina.com.cn/js/user_panel_new_version_v2.js" charset="utf-8"></script>
        <script type="text/javascript" src="//ent.sina.com.cn/470/2014/0328/search_suggest.js"></script>
        <script charset="utf-8" type="text/javascript" src="//n.sinaimg.cn/common/channelnav/js/nav.js"></script>
        <!-- FEED start -->
    
        <!--feed流配置-->
           <script type="text/javascript">
            var FEED_CARD_INFO = {
                containerID: 'feed_cont', // 容器ID
                containerWidth: 672, // 默认宽度是660
                loadType: 1, // 加载类型 1表示点击更多加载, 2表示自动加载
                autoLoadDistance: '', // 如果是自动加载, 有时候feed流并没有放在最下面, 所以scrollEnd的时候要判断这个距离
                clickLoadText: '点击加载更多',
                summaryKey: 'summary', // 摘要使用字段
                supportNotification: true,// 最左边的列表是否添加提醒功能
                notificationTemplate: '有{n}条消息，点击查看',// 提醒的格式
                notificationTimeout: 1000 * 30,// 提醒的事件间隔
                pageSize: 20, // 每次加载条数
                stepSize: 1, // 加载三次之后出分页
                moreTagTemplate: '点击查看更多关于“{n}”的文章',
    
                /*
                 * 评论相关配置
                 */
                // 1. 是否支持当前页展开评论
                enablePageComment: false,
                // 2. 评论组件编码,默认是gbk
                pageCommentEncoding: 'gbk',
                // 3. 是否显示盖楼,默认0,还可以为1
                pageCommentShowReply: 0,
                // 4. 评论显示字数
                pageCommentMaxWordCount: 110,
                // 5. 最热评论默认显示条数
                pageCommentHotPageNum: 3,
                // 6. 最新评论默认显示条数
                pageCommentFirstPageNum: 10,
    
                pageid: 121, // pageid与lid共同定位一个api地址
                homeid: 30003, // 用来上传定制信息, 见邮件[feed流订阅homeid分配]
    
                supportTabEdit: false, //是否支持兴趣设置
                editTips: ['温馨提示：点击下一步，调整分类顺序。（至少选择一个分类）', '温馨提示：完成设置后，将会根据兴趣推荐全新内容~'],
                toFilterNews: [], // 过滤从feed系统走，此处可置空
                isTabFixed: false,
                fixedTop: 0,
                supportKeywords: false, // 是否支持热词定制
                hotNewsCount: 200, //评论超过该数字显示热icon
                enableTagFeed: false,// 是否支持点击关键词加载列表，默认是false
                tagURL: 'http://tags.finance.sina.com.cn',
                yPosition: 'auto', // 如果不固定，则给一个auto，自动计算
                tabHeight: 50,
                noDataText: '没有相关新闻',
                //最左边固定tab
                firstTab: {
                    txt: '最新新闻',
                    lid: 1356
                },
    
                // 默认tab
                tabs: [-4000],
                allTabs: [-4000],
                tabInfos: {
    /*
                    'tab_-4000': {
                        txt: '理财自媒体',
                        lid: -4000,
                        //url: 'http://feed.mix.sina.com.cn/api/roll/get?pageid=155&lid=1686&num=10&page=1'
                        //url: 'http://feed.mix.sina.com.cn/api/zt/get?sid_1_value=2016qglh&sid_2_value=3&channelid=1&len=5'
                        url: 'http://cj.sina.com.cn/api/article/feed_author?num=10&page=1'
                    }
    */
                },
                requireLogin: function(){
                  var UserPanel = SINA_USER_PANEL;
                  UserPanel.setOutLoginMiddle();
                  UserPanel.getOutLogin().show();
                  // 可添加提示
                  __SinaTopBar__.user.showTip('<span>温馨提示: </span>您已经完成兴趣设置，建议登录后保存。');
                },
                isLogin: function(){
                  if(window.SINA_OUTLOGIN_LAYER){
                    return window.SINA_OUTLOGIN_LAYER.isLogin();
                  }
                  return false;
                }
            };
        </script>
        <script type="text/javascript" charset="gb2312" src="//tech.sina.com.cn/js/717/20141112/index2014/doT.min.js"></script>
        <script type="text/javascript" charset="gb2312" src="//news.sina.com.cn/blank/tianyi/feed-news.js"></script>
        <!--/feed流配置-->
    	<script type="text/javascript" src="//n.sinaimg.cn/news/643213b9/20180725/suda_log_1459340870608.js"></script> 
        <script type="text/javascript" src="//www.sinaimg.cn/unipro/pub/suda_m_v634.js"></script>
        <script type="text/javascript">suds_init(979,100.0000,1515,2)</script>
    <script type="text/javascript" src="//simg.sinajs.cn/products/news_finance/2018/pc_china_home/js/vender-5b1f99.js"></script><script type="text/javascript" src="//simg.sinajs.cn/products/news_finance/2018/pc_china_home/js/index-2b1eed.js"></script><!-- body code begin -->
    <script type="text/javascript">
    (function(){
        if(window.top !== window.self || window._thereIsNoRealTimeMessage){return};
        var script = document.createElement('script');
        script.setAttribute('charset', 'gb2312');
        script.src = '//news.sina.com.cn/js/694/2012/0830/realtime.js?ver=1.5.1';
        document.getElementsByTagName('head')[0].appendChild(script);
    })();
    </script>
    
    <!-- SSO_UPDATECOOKIE_START -->
    <script type="text/javascript">var sinaSSOManager=sinaSSOManager||{};sinaSSOManager.q=function(b){if(typeof b!="object"){return""}var a=new Array();for(key in b){a.push(key+"="+encodeURIComponent(b[key]))}return a.join("&")};sinaSSOManager.es=function(f,d,e){var c=document.getElementsByTagName("head")[0];var a=document.getElementById(f);if(a){c.removeChild(a)}var b=document.createElement("script");if(e){b.charset=e}else{b.charset="gb2312"}b.id=f;b.type="text/javascript";d+=(/\?/.test(d)?"&":"?")+"_="+(new Date()).getTime();b.src=d;c.appendChild(b)};sinaSSOManager.doCrossDomainCallBack=function(a){sinaSSOManager.crossDomainCounter++;document.getElementsByTagName("head")[0].removeChild(document.getElementById(a.scriptId))};sinaSSOManager.crossDomainCallBack=function(a){if(!a||a.retcode!=0){return false}var d=a.arrURL;var b,f;var e={callback:"sinaSSOManager.doCrossDomainCallBack"};sinaSSOManager.crossDomainCounter=0;if(d.length==0){return true}for(var c=0;c<d.length;c++){b=d[c];f="ssoscript"+c;e.scriptId=f;b=b+(/\?/.test(b)?"&":"?")+sinaSSOManager.q(e);sinaSSOManager.es(f,b)}};sinaSSOManager.updateCookieCallBack=function(c){var d="ssoCrossDomainScriptId";var a="http://login.sina.com.cn/sso/crossdomain.php";if(c.retcode==0){var e={scriptId:d,callback:"sinaSSOManager.crossDomainCallBack",action:"login",domain:"sina.com.cn"};var b=a+"?"+sinaSSOManager.q(e);sinaSSOManager.es(d,b)}else{}};sinaSSOManager.updateCookie=function(){var g=1800;var p=7200;var b="ssoLoginScript";var h=3600*24;var i="sina.com.cn";var m=1800;var l="http://login.sina.com.cn/sso/updatetgt.php";var n=null;var f=function(e){var r=null;var q=null;switch(e){case"sina.com.cn":q=sinaSSOManager.getSinaCookie();if(q){r=q.et}break;case"sina.cn":q=sinaSSOManager.getSinaCookie();if(q){r=q.et}break;case"51uc.com":q=sinaSSOManager.getSinaCookie();if(q){r=q.et}break}return r};var j=function(){try{return f(i)}catch(e){return null}};try{if(g>5){if(n!=null){clearTimeout(n)}n=setTimeout("sinaSSOManager.updateCookie()",g*1000)}var d=j();var c=(new Date()).getTime()/1000;var o={};if(d==null){o={retcode:6102}}else{if(d<c){o={retcode:6203}}else{if(d-h+m>c){o={retcode:6110}}else{if(d-c>p){o={retcode:6111}}}}}if(o.retcode!==undefined){return false}var a=l+"?callback=sinaSSOManager.updateCookieCallBack";sinaSSOManager.es(b,a)}catch(k){}return true};sinaSSOManager.updateCookie();</script>
    <!-- SSO_UPDATECOOKIE_END -->
    
    <!-- start dmp -->
    <script type="text/javascript">
    (function(d, s, id) {
    var n = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) return;
    s = d.createElement(s);
    s.id = id;
    s.setAttribute('charset', 'utf-8');
    s.src = '//d' + Math.floor(0 + Math.random() * (8 - 0 + 1)) + '.sina.com.cn/litong/zhitou/sinaads/src/spec/sinaads_ck.js';
    n.parentNode.insertBefore(s, n);
    })(document, 'script', 'sinaads-ck-script');
    </script>
    <!-- end dmp -->
    
    <!-- body code end -->
    
    </body>
    
    </html>
    
    

## 2 BeautifuSoup

```html
<html>
    <body>
        <h1 id="title">Hello world</h1>
        <a href="#" class="link"> This is a link</a>
        <a href="# link2" class="link"> this is link2</a>
    </body>
</html>

```


```python
from bs4 import BeautifulSoup
html_sample = '\
<html>\
    <body>\
        <h1 id="title">Hello world</h1>\
        <a href="#" class="link"> This is a link</a>\
        <a href="# link2" class="link"> this is link2</a>\
    </body>\
</html>'
#解析网页 （request对象，form）
soup = BeautifulSoup(html_sample,features='html.parser')
## 打印标签内的内容，去掉标签
print(soup.text)

## 找出特定的html元素
## select使用来找标签和css的！！！！！！！！！！

header = soup.select('h1')
print("header is ",header)
alink = soup.select('a')
bbody = soup.select('body')
print("body is ",bbody)
## 取出元素
print(alink[0])
## 取出标签中的内容
print(alink[0].text)
## 取出标签中的链接
print(alink[0]['href'])

for link in alink:
    print(link)
    print(link['class'])
    print(link['href'])
```

      Hello world  This is a link  this is link2 
    header is  [<h1 id="title">Hello world</h1>]
    body is  [<body> <h1 id="title">Hello world</h1> <a class="link" href="#"> This is a link</a> <a class="link" href="# link2"> this is link2</a> </body>]
    <a class="link" href="#"> This is a link</a>
     This is a link
    #
    <a class="link" href="#"> This is a link</a>
    ['link']
    #
    <a class="link" href="# link2"> this is link2</a>
    ['link']
    # link2
    

### 取出css属性元素


```python
### 找出id （id前加#）

alink = soup.select('#title')
print(alink)
### 找出class为link的元素（class前面加.)
for link in soup.select('.link'):
    print(link)
    
```

    [<h1 id="title">Hello world</h1>]
    <a class="link" href="#"> This is a link</a>
    <a class="link" href="# link2"> this is link2</a>
    


```python
## 抓取标题
```


```python
res = requests.get('https://news.sina.com.cn/china/')
res.encoding = 'utf-8'

soup = BeautifulSoup(res.text,features='html.parser')
title = soup.select('.right-content')
for news in title :
    alink=news.select('a')
    for i in alink :
        print(i.text,i['href'])
```

    陕西省委原书记赵正永落马 曾与崔永元零距离交锋 https://news.sina.com.cn/c/2019-01-15/doc-ihqhqcis6509548.shtml
    西方终于明白：在这件事上千万别惹中国 https://news.sina.com.cn/c/2019-01-15/doc-ihqfskcn7433291.shtml
    中国对加拿大动真格了 接下来事态发展三种可能 https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7512250.shtml
    央视主持人白岩松康辉获国务院特殊奖励 https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6558563.shtml
    我国氢弹之父于敏去世享年93岁 曾隐姓埋名28年 https://news.sina.com.cn/s/2019-01-16/doc-ihqfskcn7652619.shtml
    台军用“充气战车”反大陆侦查 网友：脑子没长进 https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6678806.shtml
    任正非首谈孟晚舟：作为父亲 我觉得亏欠他们 https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7608998.shtml
    陈寅第二次任上海副市长 2017年出任市政法委书记 https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6653448.shtml
    加拿大外长称已经请求中国饶加籍毒贩一命 https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7605690.shtml
    “快鹿系”集资诈骗案宣判 快鹿集团被处罚金15亿 https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6640564.shtml
    加速走近 中俄释放一重要信号 https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6640422.shtml
    "台独"称猪瘟是大陆对台"生化攻击 https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7579575.shtml
    老调重弹 五角大楼报告渲染中国“军事威胁” https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6619925.shtml
    新动向 中央纪委全会公报的7个“首次” https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6612746.shtml
    入市者访谈 杨百万的证券发家路 http://news.sina.com.cn/z/rushizhe/
    


```python
res = requests.get('http://news.sina.com.cn/c/nd/2016-08-20/doc-ifxvctcc8121090.shtml')
res.encoding='utf-8'
soup = BeautifulSoup(res.text,features='html.parser')

```


```python
print(soup.select('#artibodyTitle')[0].text)
'''contents []解析同一标签中元素为数组 ；
strip Python strip() 方法用于移除字符串头尾指定的字符（默认为空格或换行符）或字符序列。
注意：该方法只能删除开头或是结尾的字符，不能删除中间部分的字符'''
timesource =soup.select('.time-source')[0].contents[0].strip()
print(timesource)


from datetime import datetime
#转换为时间
dt = datetime.strptime(timesource,'%Y年%m月%d日%H:%M')
#输出特定格式字符串
print(dt.strftime('%Y%m%d%H%M'))
# select 是用来找标签的！！！！
print(soup.select('.time-source span ')[0].text)

```

    环保部门不再核发机动车环保合格标志
    2016年08月20日22:21
    201608202221
    
    新华网
    


```python
#获取文章正文
res = requests.get('https://news.sina.com.cn/s/2019-01-16/doc-ihqfskcn7652619.shtml')
res.encoding='utf-8'
soup = BeautifulSoup(res.text,features='html.parser')
article_raw=[]

for i in soup.select('#article p')[:-1] :
    article_raw.append(i.text.strip())
print(article_raw,"\n")
#合并
## 使用\n隔开
article='\n'.join(article_raw)
print(article)

#另一种写法
'\n'.join([ i.text.strip() for i in soup.select('#artibody p')[:-1]])
```

    ['原标题：我国氢弹之父于敏去世，享年93岁', '@光明日报1月16日消息，来自中国科学院的消息，我国国防科技事业改革发展的重要推动者、改革先锋于敏，于1月16日在京去世，享年93岁。于敏毕业于北京大学，后被著名物理学家钱三强、彭桓武调到中科院近代物理研究所。他与合作者提出了原子核相干结构模型，填补了我国原子核理论的空白。1961年，于敏开始了长达28年隐姓埋名的氢弹理论探索任务，并取得了我国氢弹试验的成功，为我国科技自主创新能力的提升和国防实力的增强作出了开创性贡献。在2018年召开的庆祝改革开放40周年大会上，党中央、国务院决定，授予于敏等100名同志改革先锋称号，颁授改革先锋奖章。（记者李苑、陈海波、齐芳）', '来源：@光明日报'] 
    
    原标题：我国氢弹之父于敏去世，享年93岁
    @光明日报1月16日消息，来自中国科学院的消息，我国国防科技事业改革发展的重要推动者、改革先锋于敏，于1月16日在京去世，享年93岁。于敏毕业于北京大学，后被著名物理学家钱三强、彭桓武调到中科院近代物理研究所。他与合作者提出了原子核相干结构模型，填补了我国原子核理论的空白。1961年，于敏开始了长达28年隐姓埋名的氢弹理论探索任务，并取得了我国氢弹试验的成功，为我国科技自主创新能力的提升和国防实力的增强作出了开创性贡献。在2018年召开的庆祝改革开放40周年大会上，党中央、国务院决定，授予于敏等100名同志改革先锋称号，颁授改革先锋奖章。（记者李苑、陈海波、齐芳）
    来源：@光明日报
    




    ''




```python
# 抓取编辑
'''
strip： 用来去除头尾字符、空白符(包括\n、\r、\t、' '，即：换行、回车、制表符、空格)
lstrip：用来去除开头字符、空白符(包括\n、\r、\t、' '，即：换行、回车、制表符、空格)
rstrip：用来去除结尾字符、空白符(包括\n、\r、\t、' '，即：换行、回车、制表符、空格)
'''
print(soup.select('.article-editor')[0].text.lstrip('责任编辑：'))
```

    瞿崑 SN117
    


```python
#新闻id fxvctcc8121090
import re
url = 'http://news.sina.com.cn/c/nd/2016-08-20/doc-ifxvctcc8121090.shtml'

#methond 1
newsid = url.split('/')[-1].rstrip('.shtml').lstrip('doc-i')
print(newsid)
#methond 2 
m = re.search('doc-i(.*).shtml',url)
## group 1 表示第一个（）匹配的部分。0返回匹配到的字符串
print(m.group(1))

comments = requests.get('http://comment5.news.sina.com.cn/page/info?version=1&format=js&\
channel=gn&newsid=comos-fxvctcc8121090&group=&compress=0&ie=utf-8&oe=utf-8&page=1&page_size=20')

#print(comments.text)

## load json
## 去掉头部，使之变为json格式
import json
jd = json.loads(comments.text.strip('var data='))
print(jd['result']['count']['total'])

```

    fxvctcc8121090
    fxvctcc8121090
    916
    


```python
# 评论数函数
news = 'https://news.sina.com.cn/o/2019-01-09/doc-ihqhqcis4539196.shtml'
commentURL = 'https://comment.sina.com.cn/page/info?version=1&format=json&channel=gn&newsid=comos-hqhqcis4539196&group=undefined&compress=0&ie=utf-8&oe=utf-8&page=1&page_size=3&t_size=3&h_size=3&thread=1'
def getCommentCounts(newsurl):
    m = re.search('doc-i(.*).shtml',newsurl)
    newsid = m.group(1)
    comments = requests.get(commentURL.format(newsid))
    jd = json.loads(comments.text.lstrip('jsonp_1547025021772(').rstrip(')'))
    #print(comments.text.lstrip('jsonp_1547025021772(').rstrip(')'))
    return jd['result']['count']['total']
getCommentCounts(news)
```




    846




```python

import requests
from bs4 import BeautifulSoup

def getNewDetail(newsurl) :
    result = {}
    res = requests.get(newsurl)
    res.encoding = 'utf-8'
    soup = BeautifulSoup(res.text,'html.parser')
    result['title'] = soup.select('.main-title')[0].text
    result['newssource'] = soup.select('.source')[0].text
    timesource = soup.select('.date')[0].contents[0].strip()
    result['dt'] = datetime.strptime(timesource,'%Y年%m月%d日 %H:%M')
    result['article'] = ''.join([ i.text.strip() for i in soup.select('#article p')[:-1]])
    result['editer'] = soup.select('.show_author')[0].text.lstrip('责任编辑：')
    result['comments'] = getCommentCounts(newsurl)
    return result
print(getNewDetail("https://news.sina.com.cn/s/2019-01-16/doc-ihqfskcn7652619.shtml"))
```

    {'title': '我国氢弹之父于敏去世享年93岁 曾隐姓埋名28年', 'newssource': '澎湃新闻', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 50), 'article': '原标题：我国氢弹之父于敏去世，享年93岁@光明日报1月16日消息，来自中国科学院的消息，我国国防科技事业改革发展的重要推动者、改革先锋于敏，于1月16日在京去世，享年93岁。于敏毕业于北京大学，后被著名物理学家钱三强、彭桓武调到中科院近代物理研究所。他与合作者提出了原子核相干结构模型，填补了我国原子核理论的空白。1961年，于敏开始了长达28年隐姓埋名的氢弹理论探索任务，并取得了我国氢弹试验的成功，为我国科技自主创新能力的提升和国防实力的增强作出了开创性贡献。在2018年召开的庆祝改革开放40周年大会上，党中央、国务院决定，授予于敏等100名同志改革先锋称号，颁授改革先锋奖章。（记者李苑、陈海波、齐芳）来源：@光明日报'}
    


```python
res = requests.get('https://feed.sina.com.cn/api/roll/get?pageid=121&lid=1356&num=20&versionNumber=1.2.4&\
                   page=1&encode=utf-8&callback=feedCardJsonpCallback&_=1547025892640')
#截取字符串
news_list = res.text[26:][:-14]
jd = json.loads(news_list)
for ent in jd['result']['data'] :
    print(ent['url'])
```

    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6712244.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6710629.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7662674.shtml
    https://news.sina.com.cn/s/2019-01-16/doc-ihqfskcn7652619.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7650078.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7654821.shtml
    https://news.sina.com.cn/c/xl/2019-01-16/doc-ihqfskcn7644043.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6686604.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6691086.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6678806.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6672483.shtml
    https://news.sina.com.cn/o/2019-01-16/doc-ihqhqcis6669450.shtml
    https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7620279.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7614322.shtml
    https://news.sina.com.cn/o/2019-01-16/doc-ihqfskcn7615741.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7613299.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqfskcn7608998.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6653448.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6651994.shtml
    https://news.sina.com.cn/c/2019-01-16/doc-ihqhqcis6651993.shtml
    


```python
def parseListLinks(url):
    newsdetail = []
    res = requests.get(url)
    news_list = res.text[26:][:-14]
    jd = json.loads(news_list)
    i=0
    for ent in jd['result']['data'] :
        #print(ent['url'])
        newsdetail.append(getNewDetail(ent['url']))         
    return newsdetail
parseListLinks('https://feed.sina.com.cn/api/roll/get?pageid=121&lid=1356&num=20&versionNumber=1.2.4&page=3&encode=utf-8&callback=feedCardJsonpCallback')
```




    [{'article': '原标题：国民党“立委”蒋万安公开支持蔡英文所谓“四个必须” 国台办回应海外网1月16日电 16日（周三）上午10：00，国务院台湾事务办公室举行例行新闻发布会，国台办发言人马晓光就近期两岸热点问题回答记者提问。记者：近日国民党“立委”蒋万安公开支持台当局领导人在元旦讲话中抛出的所谓“四个必须”，其后他又澄清自己支持“九二共识”，请问发言人对此有何评论？马晓光：我想再次重申，“九二共识”是两岸关系和平发展的政治基础，是两岸关系和平发展的“定海神针”。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 11, 13),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '蒋介石曾孙蒋万安公开支持蔡英文 国台办回应'},
     {'article': '原标题：蔡英文妄称没有“九二共识” 国台办：反映个人品行操守海外网1月16日电 国台办16日上午10：00举行例行新闻记者会，针对蔡英文拒认“九二共识”，发言人马晓光作出回应。深圳卫视记者：蔡英文在任台陆委会负责人时说过，“九二共识”就是各自表述一个中国，但是现在她却称没有“九二共识”，请问发言人对此有何评论？马晓光：我们注意到了媒体上的报道。我想这从一个侧面也反映了台湾一些政治人物的政治品行和操守问题。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 11, 12),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '蔡英文妄称没有"九二共识" 国台办:反映个人操守'},
     {'article': '原标题：大陆游客赴高雄人数预计明显增长，国台办：意料之中[环球网综合报道]有媒体报道，预计春节前后，前往高雄和台中地区的大陆游客将明显增长至少两成以上，尤其高雄会更加明显。对此，国台办发言人马晓光在1月16日的国台办2019年第一次新闻发布会上进行了回应。马晓光说，广大大陆游客看到高雄出现的积极变化，也看到了高雄市相关负责人对于两岸关系和两岸城市交流性质的正确认知，所以在春节前后出现赴高雄旅游人数的增多，应该是自然的和意料之中的事情。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 11, 8),
      'editer': '张迪 ',
      'newssource': '环球网',
      'title': '陆客赴高雄人数预计明显增长 国台办：意料之中'},
     {'article': '原标题：农业农村部：非洲猪瘟对市场影响有限 春节前猪价总体稳定中新经纬客户端1月16日电 农业农村部16日举行发布会，农业农村部市场与信息化司司长唐珂表示，2018年猪肉价格总体波动不大，非洲猪瘟对市场影响有限。猪肉价格总体呈现“上半年下跌、下半年季节性回升、非洲猪瘟发生后产销区有所分化”的特征。2019年下半年生猪上市量偏少，猪价上涨的可能性较大。唐珂指出，据农业农村部监测，全年猪肉批发市场均价为每公斤18.7元，同比跌12.1%。8月份非洲猪瘟发生后，受活猪跨省禁运政策影响，区域间供需出现不平衡现象，产区跌、销区涨；随着各地改“调猪”为“调肉”，流通渠道逐渐通畅，产销区猪价分化趋缓。有记者问，上文预计猪肉短期内不会大幅上涨，短期到底是多长时间？对于2019年全年猪肉价格有怎样的预测？现在的一些养殖户对于补栏还是有比较强的想法，对于他们有什么建议？对此，唐珂表示，去年8月份非洲猪瘟疫情发生以来，农业农村部坚决落实国务院的决策部署，严格落实疫情的防控措施，同时加强生猪市场运行监测预警。2018年生猪市场受非洲猪瘟的影响总体有限，猪价波动不大。预计在春节前，生猪价格将保持稳中略降，市场供应充足，这一点请社会放心。唐珂介绍，据农业农村部监测，1月份第2周全国活猪平均价格每公斤13.65元，比前一周下降1.6%，连续4周下跌，同比下降11.2%；猪肉价格每公斤23.55元，比前一周下降0.9%，同比下降7.7%。2018年12月份，全国肥猪平均出栏体重124.27公斤，处于历史较高水平，表明主产区仍存在压栏的现象；生猪出栏比上月增长9.5%，养猪场户集中出栏较多；定点监测集贸市场猪肉交易量同比下降14.4%，消费需求偏弱。总的看，市场供需相对宽松，春节前价格保持总体稳定，不会出现大的波动。因为非洲猪瘟疫情防控需要，部分地区仍然需要严格控制生猪及其产品的流动，不排除部分销区价格有所上涨的可能性。关于2019年的生猪市场形势，唐珂指出，今年下半年猪价将看好，所以养殖场户应适时补栏。据农业农村部监测，2018年12月份全国生猪存栏同比下降4.8%；能繁母猪存栏同比下降8.3%，连续3个月跌幅超过5%的预警线，意味着今年下半年生猪上市量偏少，猪价上涨的可能性较大。1月份第2周全国仔猪平均价格每公斤22.22元，同比下跌27.4%，处于价格波动周期的底部。所以建议广大养殖场户在做好非洲猪瘟疫情防控的基础上，适时调整养殖结构，增加补栏。农业农村部也将督促各地进一步落实保障生产供给、畅通种猪和仔猪调运的相关政策，尽量保证肥猪正常出栏，补得了、卖得出，解决广大养殖场户增养补栏的后顾之忧。（中新经纬APP）',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 11, 5),
      'editer': '张迪 ',
      'newssource': '中国新闻网',
      'title': '农业部:猪瘟对市场影响有限 春节前猪价总体稳定'},
     {'article': '原标题：新党主席称愿与大陆进行政治协商 国台办这么说海外网1月16日电 国台办16日上午10：00举行例行新闻记者会，发言人马晓光表示，大陆方面愿意在一个中国原则基础上，与岛内各界人士就两岸政治问题和推进祖国和平统一进程的有关问题开展对话沟通。《台声》杂志社记者：日前新党主席郁慕明表示，愿意率先与大陆进行政治协商，请问发言人是否还有其他岛内政党或团体表示与大陆进行政治协商的意愿。马晓光：新党一直主张两岸和平统一，坚定支持一个中国、反对“台独”，我们对此高度赞赏。我们愿意在一个中国原则基础上，同包括新党在内的台湾各党派、团体和人士就两岸政治问题和推进祖国和平统一进程的有关问题开展对话沟通，共同推进两岸关系和平发展，共谋祖国和平统一和中华民族的伟大复兴。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 11, 2),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '新党主席称愿与大陆进行政治协商 国台办回应'},
     {'article': '原标题：香港2天现44宗幼儿园流感个案 部分学校已停课中新网1月16日电 据香港《星岛日报》报道，13日及14日，香港录得44宗幼儿园或幼儿中心爆发流感个案，而英基国际幼儿园青衣分校15日更宣布停课至21日。香港卫生署亦公布，粉岭五常法幼儿园及九龙城拔萃男书院附属小学爆发甲型流感个案，共涉及46名学童及教职员，其中6人需要入院，所有患者现在情况稳定。香港英基国际幼儿园青衣分校近日向家长派发通告，因应流感爆发，宣布由15日下午至21日停课。学校发言人表示，英基非常注重学生的安全和健康，有关决定是预防病毒在校园进一步扩散，并已将情况通报香港卫生防护中心。校内感染流感的人数达双位数，包括17名学童及1名女职员，其中有1人需入院治疗，而感染个案有上升趋势，因此作出停课安排。香港卫生署最新数字显示，截至14日，过去2天共录得62宗院舍学校爆发流感样疾病个案，受影响人士多达365人，其中幼儿园或幼儿中心占44宗，小学及中学共占11宗。另外，粉岭五常法幼儿园亦爆发甲型流感个案，涉及24名学童，包括10男14女，介乎2至6岁，以及1名女职员，其中23人曾经求医，其中6人需入院接受治疗，现在病人情况稳定。至于九龙城拔萃男书院附属小学同样爆发甲型流感，涉及21名男学童，介于6至10岁之间，全部患者已向私家医生求医，毋须入院，所有病者情况稳定。香港卫生防护中心发言人提醒，学童如出现发热，不论是否有呼吸道感染病征，都不应回校上课，应求诊及避免上学，直至退烧后48小时。发言人预计，香港季节性流感活跃程度在未来数周将持续上升，并会在高水平维持一段时间。自流感高峰期踏入以来，香港医管局急症室求诊人数持续升高，14日医管局共约有6750人求医，其中约1000人需要入住内科病房。伊利沙伯医院情况最严重，内科病床占用率高达127%，其次为韦尔斯亲王医院、明爱医院及联合医院亦高达120%。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 11, 1),
      'editer': '张迪 ',
      'newssource': '中国新闻网',
      'title': '香港2天现44宗幼儿园流感个案 部分学校已停课'},
     {'article': '原标题：“台独”人士称猪瘟是大陆对台的“生化攻击” 国台办回应海外网1月16日电 16日（周三）上午10：00，国务院台湾事务办公室举行例行新闻发布会，国台办发言人马晓光就近期两岸热点问题回答记者提问。记者：台湾政客不断炒作非洲猪瘟疫情议题，蔡英文多次在参加活动中都提到，诬称大陆故意让非洲猪瘟疫情向台湾岛内输入，有“台独”人士称非洲猪瘟疫情是大陆对台湾发起的生化攻击，请问发言人有何评论。谢谢。马晓光：在上次新闻发布会上我已经正面回答过这个问题。日前，大陆农业主管部门有关负责人也已就非洲猪瘟疫情的防控工作情况再次向社会作了说明。大家可以到农业部网站上查询。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 11, 0),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '"台独"称猪瘟是大陆对台"生化攻击" 国台办回应'},
     {'article': '原标题：为了这43名台民众 国台办斥“陆委会” ：总跟台胞对着干海外网1月16日电 16日上午，国务院台湾事务办公室举行例行新闻发布会，国台办发言人马晓光就近期两岸热点问题回答记者提问。有记者提问，厦门市海沧区今年开出了30多个社区主任助理的职位空缺，台湾陆委会宣称经过相关机关的会商后，认定目前有43名台湾民众因担任大陆基层行政职务，原则上违反了《两岸人民关系条例》，请问发言人对此有何评论？马晓光表示，台湾陆委会总是跟台湾同胞的利益福祉对着干。这就是评论。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 54),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '为43名台民众 国台办斥"陆委会" :总跟台胞对着干'},
     {'article': '原标题：老调重弹！五角大楼报告渲染中国“军事威胁”——中国南部战区海军航空兵某旅某新型歼轰机编队起飞（2019年1月4日摄）。 新华社发参考消息网1月16日报道 美媒称，美国国防部情报局1月15日发布了一份措辞严厉的报告。报告称，中国日益现代化的军队正在迅速缩小与美国及其他军事大国的差距。据《华盛顿时报》网站1月15日报道称，美国国防情报局高级情报分析师丹·泰勒说，这份由国防情报局刚刚发布的报告认为，随着中国在军事能力和国防战略上的进步，中国正迅速进入“建立综合国力的战略机遇期”。泰勒预计，中国军队的技术将变得更加先进和熟练，最终将使解放军与包括美军在内的主要现代军队平起平坐。五角大楼一位情报官员1月15日在记者会上说，北京“在所有领域同时”迅速取得的进展给五角大楼敲响了警钟。这位情报官员说，美国官员认为，中国的中程精确打击武器，如巡航导弹，几乎正在获得与美国及西方军队同类系统的同等水平。他还说：“看到他们在所有领域都取得进展非常令人担忧。”另据美国《防务新闻》周刊网站1月15日报道，近年来，美国国防部高级官员和五角大楼内部报告都对中国崛起成为军事强国提出警告，这在很大程度上是由于中国对高超音速等高端技术的投入，以及隐形战斗机和航空母舰等本土能力的迅速发展。该报告是美国国防情报局发布的首份对中国军事力量的公开分析报告，一位高级情报官员说，这份报告没有机密版本。报告称，中国可能在某些领域已经超越美国。此外，《华盛顿邮报》网站1月15日刊登了题为《中国的进步被认为对美国军事主导地位构成威胁》的报道称，美国国防部1月15日发布的一份情报报告指出，中国发展尖端武器和建立军事强国的努力对美国构成了越来越大的威胁。这份公开报告反映出，美国政府内越来越多的人担心，美国的行动不够迅速，不足以应对中国军事的迅速崛起。国防情报局的报告强调了中国作为全球军事参与者的新兴地位的影响力。在亚洲之外，中国在吉布提建立了第一个海外保障基地，该基地曾在中国海军的帮助下从也门撤离了中国公民。（编译/王露露）',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 54),
      'editer': '张迪 ',
      'newssource': '参考消息',
      'title': '老调重弹 五角大楼报告渲染中国“军事威胁”'},
     {'article': '原标题：马英九称5月20日后或访问中国大陆 国台办回应海外网1月16日电 国台办16日上午10：00举行例行新闻记者会。记者：请问马英九接受专访时，被问到5月20号解禁后是否有可能访问中国大陆，他说不排除这个可能性，请问发言人怎么评价？马晓光：马英九先生在担任台湾地区领导人期间，坚持“九二共识”、反对“台独”，推动两岸关系和平发展，取得了积极成果。我们愿意同台湾岛内坚持“九二共识”、反对“台独”、赞成两岸关系和平发展的政党、团体和人士加强交往，就两岸关系和民族未来广泛交换意见。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 52),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '马英九称5月20日后或访问中国大陆 国台办回应'},
     {'article': '原标题：蔡英文“四个必须”与大陆“一国两制”有冲突？国台办回应海外网1月16日电 16日（周三）上午10：00，国务院台湾事务办公室举行例行新闻发布会，国台办发言人马晓光就近期两岸热点问题回答记者提问。记者：习近平总书记提出对台工作“五点主张”之后，蔡英文在其“四个必须”当中特别强调两岸的交流必须是政府之间的或者政治授权的机构坐下来谈，这与大陆提出“一国两制”的台湾方案有一定冲突，发言人如何评论？谢谢。马晓光：刚才我已经进行了评论和驳斥。2016年以来，两岸制度化交往和协商机制为什么中断，是因为民进党当局单方面破坏了两岸协商的共同政治基础，他们拒不承认一个中国原则，否定“九二共识”，这是根本症结所在。这个原因大家都十分清楚。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 50),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '蔡英文"四个必须"与"一国两制"有冲突?国台办回应'},
     {'article': '原标题：“统派”人士宣布参选2020 国台办：愿与主张统一团体对话海外网1月16日电 国台办16日上午10：00举行例行新闻记者会，针对“统派”人士参选2020台湾地区领导人选举，发言人马晓光作出回应。福建海峡卫视记者：张亚中宣布参选台湾地区领导人，有评论认为未来“统派”在台湾的选举当中会有更大的声量，请问发言人有何评论？马晓光：我们对台湾岛内的事务，特别是围绕选举的事务从来不予置评。我想强调的是，我们对台方针政策是“和平统一、一国两制”，对于台湾岛内主张统一的团体和人士，我们愿意进行往来、接触、加强交流对话。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 48),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '张亚中参选2020"统派"将会有更大声量?国台办回应'},
     {'article': '原标题：广东省委常委、省委组织部部长邹铭已赴中组部工作全国组织部长会议1月14日至15日在北京召开。据央视网1月15日晚报道的画面信息显示，此前担任广东省委常委、组织部部长的邹铭已赴中组部工作。据央视网报道提供的会议现场画面，邹铭在主席台就座，并位于中央组织部副部长、国家公务员局局长傅兴国和中央组织部部务委员李小新之间。公开资料显示，邹铭曾长期在民政部工作，历任民政部党组成员、优抚安置局局长，全国老龄办党组书记、常务副主任，中国老龄协会会长等职，2015年1月任民政部副部长，后于2016年3月调任广东省委常委、省委秘书长、办公厅主任。2017年2月，邹铭兼任广东省委组织部部长。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 45),
      'editer': '赵明 ',
      'newssource': '澎湃新闻',
      'title': '广东省委组织部部长邹铭已赴中组部工作'},
     {'article': '原标题：岛内称大陆个税法会让台商有“较高风险”，国台办：不存在[环球网综合报道]《个人所得税法实施条例》1月1日颁布，台有关方面称，大陆在新税法当中纳入了反避税的规定，如果台胞是以在大陆有合法稳定住所申请台湾居民居住证的话，可能会被认定为“税收居民”，这将使大陆的台商具有较高的风险。对此，国台办发言人马晓光1月16日在国台办2019年第一场例行新闻发布会上进行了回应。马晓光说，据了解，个人所得税法及其实施条例中增加反避税的条款，是一项普适性的税收政策，这些规则在世界主要国家和地区包括在台湾地区的税收立法中普遍存在。马晓光表示，台胞在大陆工作、经商，与港澳同胞享有相同的税收义务和权利，不存在所谓“较高风险”一说。关于台胞台商关心的新税法相关问题，马晓光进行了一些说明：一是台胞在申请居民居住证时的“合法稳定住所”，并不等同于个人所得税法上所说的“有住所”，台胞在大陆有合法稳定的住所，但因为学习、工作、探亲等原因消除以后，返回台湾的，原则上视为“无住所”的个人，不据此认定为大陆的税收居民。二是此次个人所得税改革，延续并优化了原税法实施条例中的优惠政策，对无住所个人来大陆境内短于6年者，对其境外支付的境外所得免予征税。三是此次改革全面实施了综合与分类相结合的税制，提高了起征点，调整了税率表，增加了专项的附加扣除，进一步减轻了台湾同胞在大陆就业和生活上的税负。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 42),
      'editer': '张迪 ',
      'newssource': '环球网',
      'title': '大陆个税法会让台商有“较高风险”？国台办回应'},
     {'article': '原标题：台当局以‘’危害安全‘’为由抓陆客 国台办：恶劣行径不得人心海外网1月16日电 国台办16日上午10：00举行例行新闻记者会，针对台当局以“危害安全”为由抓捕陆客，发言人马晓光作出回应。中央广播电视总台国广记者：近日，台湾地区领导人蔡英文参加活动时妄称说，每年中国大陆有两三百万人次赴台，其中有人会利用交流活动为掩护，刺探或者收集情报，2018年以来台湾有关部门以危害安全为由抓了174人，其中就有陆客，请问发言人对此有何评论？谢谢。马晓光：民进党当局不断地编造、罗织一些莫须有的罪名，阻挠和破坏两岸正常的交流往来，恐吓台湾民众，升高两岸对抗，煽动两岸敌意，这种恶劣行径不得人心，也必将遭到两岸同胞的坚决反对。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 41),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '台当局以“危害安全”为由抓陆客 国台办回应'},
     {'article': '原标题：台“工研院”禁用华为设备 国台办：坚决反对海外网1月16日电 16日（周三）上午10：00，国务院台湾事务办公室举行例行新闻发布会，国台办发言人马晓光就近期两岸热点问题回答记者提问。记者：我有两个问题：第一，台湾“工研院”宣布禁止内部员工使用华为手机和电脑，对此发言人有何评论？第二，福建省长宣布在2019年将积极推进通水、通电、通桥、通气等新“四通”，想要了解一下大陆的态度。谢谢。马晓光：第一个问题，对于这类出于政治目的破坏两岸正常经贸合作的做法，我们坚决反对。它不仅损害大陆企业的利益，也严重损害台湾消费者的利益。这种做法迎合外国某些势力，甘当外人的棋子是不得人心的。第二个问题，习近平总书记在1月2日的重要讲话中，从“亲望亲好，中国人要帮中国人”的亲情善意出发，提出深化两岸融合发展，继续率先同台湾同胞分享大陆发展机遇，促进台湾同胞福祉的一系列政策主张，提出“两岸要应通尽通”，并且提出“可以率先实现金门、马祖同福建沿海地区通水、通电、通气、通桥”。福建省方面认真贯彻习近平总书记的重要讲话精神，将积极推进有关工作。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 40),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '台湾“工研院”宣布禁用华为设备 国台办回应'},
     {'article': '原标题：台当局阻挠高雄等台湾县市与大陆交流 国台办回应海外网1月16日电 16日上午，国务院台湾事务办公室举行例行新闻发布会，国台办发言人马晓光就近期两岸热点问题回答记者提问。有记者提问，有媒体报道，预计春节前后，前往高雄和台中地区的大陆游客将明显增长至少两成以上，尤其高雄会更加明显，请问发言人对此有何评论？马晓光表示，广大大陆游客看到高雄出现的积极变化，也看到了高雄市相关负责人对于两岸关系和两岸城市交流性质的正确认知，所以在春节前后出现赴高雄旅游人数的增多，应该是自然的和意料之中的事情。还有记者提问，台当局通过多种途径阻挠台湾县市和大陆的交流，首当其冲受到影响的就是高雄市，与此同时，高雄市长韩国瑜不断强调“九二共识”和两岸交流的重要性，请问发言人对此有何评价？谢谢。马晓光称，我们已经多次讲过，只要对两岸关系性质和两岸城市交流的性质有正确认知，我们对两岸城市交流都持积极开放的态度，我们也愿意在这个基础上，欢迎并支持更多的台湾县市参加到两岸城市交流中来，促进两岸民众的亲情和福祉，扩大两岸同胞，特别是台湾同胞的受益面和获得感。同时需要指出的是，2016年以来限制两岸交流往来的一些结构性的因素，根本性的症结还没有消除。我们注意到最近在岛内围绕着要交流和不允许交流进行的一些交锋，我想广大台湾同胞都会判断，哪些是对两岸关系好，哪些是对台湾同胞自身的利益福祉好，他们会做出正确的判断。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 38),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '台当局阻挠高雄等台湾县市与大陆交流 国台办回应'},
     {'article': '原标题：新动向！中央纪委全会公报的7个“首次”1月13日，十九届中央纪委三次全会公报公布。近4000字的公报中，有不少“新提法”，揭示了未来纪委监委工作新走向，传递了正风肃纪反腐新动向，释放出全面从严治党新信号。首次提出“把握‘稳’的内涵、强化‘进’的措施”稳中求进工作总基调是治国理政的重要原则，新时代纪检监察工作也要坚持这一原则。公报明确纪检监察工作“稳”和“进”的辩证关系，提出要“把握‘稳’的内涵、强化‘进’的措施”。“稳”就是要保持政治定力，增强忧患意识，坚持问题导向，做到工作力度不减、节奏不变；保持高压态势，持之以恒正风肃纪，把“严”字长期坚持下去；以钉钉子精神狠抓落实、抓出成效。“进”就是要以改革创新精神推动纪检监察工作，例如着力提高监督质量特别是日常监督实效，提高纪法贯通能力，持续深化“三转”，准确运用监督执纪“四种形态”，在坚持依规依纪依法上下功夫等。坚持稳中求进，是实现新时代纪检监察工作高质量发展的必然要求，有利于使各项工作思路举措更加科学、更加严密、更加有效，推动全面从严治党不断向纵深推进。首次从政治建设的高度，提出力戒形式主义、官僚主义公报提出“以党的政治建设为统领，坚决破除形式主义、官僚主义。”现实表明，形式主义、官僚主义是当前党内存在的突出矛盾和问题，是阻碍党的路线方针政策和党中央重大决策部署贯彻落实的大敌，不是简单的作风问题，而是严肃的政治问题，破坏的是党和人民的事业，透支的是人民群众的信任信赖，侵蚀的是党执政的政治基础。全会要求严明政治纪律和政治规矩，深化集中整治形式主义、官僚主义成果，紧盯对党中央重大决策部署不敬畏、不在乎、喊口号、装样子，严肃查处空泛表态、应景造势、敷衍塞责、出工不出力等问题。首次强调“聚焦群众痛点难点焦点”民心是最大的政治。纪检监察工作必须始终坚持以人民为中心的政治立场。人民群众反对什么、痛恨什么，我们就坚决防范和纠正什么。十九届中央首轮巡视受理群众信访举报40余万件次，绝大部分反映的是群众身边的腐败和作风问题，特别是扶贫开发、教育医疗、土地征收、市场监管、食品药品安全等民生领域侵害群众利益问题依然多发。有什么问题就解决什么问题，什么问题突出就集中整治什么问题，公报聚焦群众痛点难点焦点，关注群众最关心最直接最现实的利益问题，提出要“解决教育医疗、环境保护、食品药品安全等方面侵害群众利益问题”，为的就是要让人民群众有更多更直接更实在的获得感、幸福感、安全感，让老百姓感受到全面从严治党就在身边，感受到正风反腐的成效和变化。首次把“日常监督、长期监督”单列为一项工作任务监督是纪检监察机关的基本职责、第一职责，没有强有力的监督，审查调查和问责处置就没有基础。要履行好监督这个首要职责，尤其要在加强日常监督、长期监督上探索创新、实现突破。在公报2019年主要任务部分，将“做实做细监督职责，着力在日常监督、长期监督上探索创新、实现突破”，作为第四项任务单独部署。要把日常监督实实在在做起来、做到位，抓早抓小、防微杜渐，贯通运用“四种形态”，形成更加聚焦、更加精准、更加有力的监督。各级党组织、党员干部要认真履行日常监督职责，持续用力、形成常态，让干部习惯在受监督和约束的环境中工作生活，形成监督与接受监督的浓厚氛围和良好习惯。首次明确“加大金融领域反腐力度”金融安全事关国家安全。项俊波、杨家才、赖小民等严重违纪违法问题，暴露出金融系统诸多深层次问题。部分从业人员纪律意识规矩意识淡漠，面对金融市场巨大利益诱惑，容易防线失守被“围猎”；金融圈子小，同学、师生、同事、亲友等裙带关系交织，监管者与被监管对象之间亲而不清、公私不明，容易形成利益团伙；腐败问题存量多、增量不断，不收手、不收敛问题依然突出。公报中明确了精准的惩治方向，在强调紧盯重大工程、重点领域、关键岗位时，特别指出要加大金融领域反腐力度。目前，中央纪委国家监委正有序开展向中管金融企业派驻纪检监察组的各项工作。首次强调“坚决防范利益集团拉拢腐蚀领导干部”我们党全面领导、长期执政，面临的最大威胁就是腐败，领导干部时刻面对被“围猎”、被腐蚀的考验和风险。广东省委原常委、统战部原部长曾志权，与私营企业主相互勾结，以“合法商业行为”之名掩盖权钱交易之实；内蒙古自治区政府原党组成员、副主席白向群，甘于被“围猎”，与不法商人勾肩搭背、沆瀣一气……这些被查处的干部“政治问题与经济问题相互交织”、“甘于被‘围猎’”，就是典型的例证。要坚持靶向治疗、精确惩治，聚焦党的十八大以来着力查处的重点对象，坚决清除甘于被“围猎”的腐败分子，按照公报的要求，“坚决防范利益集团拉拢腐蚀领导干部，推动构建亲清新型政商关系”。首次提出“深度参与反腐败国际治理，一体推进追逃防逃追赃工作”腐败是世界性难题，需各国携手解决。党的十八大以来，中国深入开展追逃追赃，积极参与全球反腐败治理。通过加强廉洁丝绸之路建设，推动二十国集团、亚太经合组织、金砖国家、中非合作论坛等多边框架下的国际合作，推动出台国际刑事司法协助法，加强反腐败综合执法国际合作，推动构建国际反腐新秩序。全会又对相关工作提出了新要求，即“深度参与反腐败国际治理，一体推进追逃防逃追赃工作”。国际追逃追赃“提速换挡”，特别是将防逃工作摆在了更高的位置。防逃工作是国际追逃追赃工作的重要组成部分，防住一个就等于追回一个，在开展追逃追赃的同时，着力构建不敢逃、不能逃的防逃机制，坚持追逃防逃两手抓，会更加事半功倍。（中央纪委国家监委网站 胡晓 张琰）',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 36),
      'editer': '张迪 ',
      'newssource': '中央纪委国家监委',
      'title': '新动向 中央纪委全会公报的7个“首次”'},
     {'article': '原标题：今年商务工作重中之重：一促两稳三重点商务部部长助理任鸿斌在今日发布会上称，商务部将做好以下重点工作：促消费，创新流通方式，充分发挥好消费的基础性作用；其次稳外贸稳外资，继续提升贸易便利化水平，同时不断放宽市场准入、改善营商环境；突出三项重点任务：办好第二届进博会，妥善应对中美经贸摩擦、推进自贸试验区建设和探索自由贸易港。这是党中央交给商务部的重要政治任务，也是今年商务工作的重中之重。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 34),
      'editer': '赵明 ',
      'newssource': '一财网',
      'title': '今年商务工作重中之重：一促两稳三重点'},
     {'article': '原标题：台当局在香港设立“法务秘书”？国台办：不实海外网1月16日电 16日上午，国务院台湾事务办公室举行例行新闻发布会，国台办发言人马晓光就近期两岸热点问题回答记者提问。有记者提问，据台湾媒体报道，台所谓“法务调查局”前不久获得大陆方面的同意到港设立“法务秘书”，据称这是该局首次有人在海外据点工作，请问发言人对此有何评论？谢谢。马晓光表示，有关报道不符合事实。按照港台双方的有关共识，香港“台北经济文化办事处”并未设立“法务秘书”一职，更没有所谓“获得大陆方面同意”这回事。台湾有关机构应该切实遵守香港基本法及有关法律，在规定的职责范围内活动。',
      'comments': 846,
      'dt': datetime.datetime(2019, 1, 16, 10, 31),
      'editer': '张迪 ',
      'newssource': '海外网',
      'title': '台获大陆同意在香港设“法务秘书”？国台办回应'}]




```python
url = 'https://feed.sina.com.cn/api/roll/get?pageid=121&lid=1356&num=20&versionNumber=1.2.4&page={}&encode=utf-8&callback=feedCardJsonpCallback'
news_total =[]

for i in range(1,3) :
    news_url = url.format(i)
    news = parseListLinks(news_url)
    #追加多个值
    news_total.extend(news)
print(news_total)
```

    [{'title': '2018年全国查处违反中央八项规定精神问题65055起', 'newssource': '中央纪委国家监委', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 16, 29), 'article': '原标题：2018年12月全国查处违反中央八项规定精神问题9350起为掌握全国贯彻落实中央八项规定精神情况，中央纪委在各省区市和新疆生产建设兵团、各中央和国家机关、各中央企业和中央金融企业等建立了落实中央八项规定精神情况月报制度。2018年以来，截至12月31日，全国查处违反中央八项规定精神问题情况如下：'}, {'title': '著名演员奚美娟当选上海文联主席(图)', 'newssource': '澎湃新闻', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 16, 21), 'article': '原标题：著名演员奚美娟当选上海文联主席：为上海文化建设添砖加瓦1月16日，上海市文学艺术界联合会第八次代表大会在上海举行，选举产生了上海市文联第八届委员会主席团成员，著名演员奚美娟当选上海文联主席团主席。在当选为新一任市文联主席后，奚美娟发言：“衷心感谢委员们对我们的信任，凝聚期盼和嘱托，文联是广大文艺工作者的精神之家，联络服务大家的平台，每一个协会像珍珠，每一串珍珠生机勃勃闪着光亮，文联才会真正闪烁光芒，而每一颗珍珠保持光芒最直接的体现就是继承和发扬优秀传统文化，到广阔的社会生活中发现美，追求卓越精益求精，把精品力作作为立身之本，为上海文化建设添砖加瓦，对文学艺术界的明天充满信心。”从青葱岁月学习表演开始实践至今，奚美娟为广大观众奉献了无数经典角色。她始终记得刚走上艺术创作道路时，她的老师曾教导过她“不要企图重复过去发生的事情，创造力才是艺术的生命力。艺术家应该去观察生活，而不是招摇过市，成为别人观察的对象。”这些教诲让她受益终生。作为演员经常会遇到一个问题，生活的真实和艺术的真实之间如何平衡把握，奚美娟曾表示：“一个角色让观众觉得亲近，得到观众认同，是因为好的艺术创作的基础来源于生活。文学艺术是更高层面的东西，艺术本身一定会潜移默化地影响这个城市的风气。”此次会议还选举出了丁申阳、王汝刚、尤存（专职）、任仲伦、许舒亚、孙甘露、李守白、杨绍林、何麟、辛丽丽、汪大伟、汪涌豪、沈文忠（专职）、郑辛遥、俞亦纲、韩陈青（专职）、雍和、谭晶华、滕俊杰为市文联副主席，王丽萍、张国勇、罗怀臻、黄豆豆、韩生、廖昌永为市文联主席团委员（按姓氏笔画为序）。（澎湃新闻记者 徐明徽）'}, {'title': '“两弹一星功勋奖章”获得者于敏去世 仅3位在世', 'newssource': '海外网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 16, 3), 'article': '原标题：于敏先生，一路走好我国国防科技事业改革发展的重要推动者、改革先锋于敏，于1月16日在京去世，享年93岁。至此，中国23位“两弹一星功勋奖章”获得者中，仅余3位在世。隐姓埋名28年上个世纪六十年代，氢弹技术是各个核大国的最高机密，没有参考借鉴，中国的氢弹研究是彻底白手起家。带头突破氢弹原理的，正是于敏，这个中国自主培养的“国产土专家一号”。因于敏的工作内容较为特殊，在28年时间里，他的名字曾是绝密，直到1988年解密。连妻子孙玉芹都说：“没想到老于是搞这么高级的秘密工作的。”“百日会战”：跪在地上做研究从第一颗原子弹爆炸到第一颗氢弹试验成功，美国用了7年零3个月，中国用了2年零8个月，速度世界第一。“中国闪电般的进步，神话般不可思议。”西方科学家评论。巨大的成功背后，是难以想象的艰辛——全国仅一台每秒万次的计算机，95%的时间算原子弹，5%留给氢弹设计。1965年9—11月，上海。39岁的于敏带领科研团队来到上海华东计算所，对加强型原子弹进行优化设计。这一百多个日日夜夜，于敏经常半跪在地上分析堆积如山的计算纸带，终于实现了氢弹原理突破，形成了一套从原理、材料到构型基本完整的物理方案——这就是核武器研究史上著名的“百日会战”。氢弹成功爆炸，他回去就睡了1967年6月17日，我国成功地空投爆炸了第一颗氢弹，爆炸威力同于敏计算的结果完全一致。试验成功的这一刻，于敏并没有在现场，而是在北京守候在电话旁，他早已成竹在胸。“我这个人不大流泪，也没有彻夜不眠，回去就睡觉了，睡得很踏实。”为了真理，他曾拍案而起1971年，青海核武器研制基地。由于某型号试验未能达到预期效果，被军管会定性为“理论长期脱离实际的恶果”，进而在“学习班”上对理论部横加批判。时任理论部副主任的于敏分析出实验失败是技术问题而非政治问题，并从模型和原理上提出修改设想。然而，这却完全违背了军管会定下的表态基调，在变本加厉的威逼胁迫下，一向温文尔雅的于敏竟拍案而起，“我不会同意你们的说法，那是不符合科学规律的”。事后，他对一同工作的胡思得说“顺了他们的意思，的确很好过关。但那是对不起真理，经不住历史考验的。”事实胜于雄辩，后来按照于敏的改进建议，实验得到技术上的修正并实现了成功。对《出师表》，泪流满面1984年的12月，新疆核试验基地。零下三四十度的天气，早起刷牙拖鞋都会被冻在地上。这次实验，参试人员都倍感压力。一次讨论会，大家刚刚坐定，心有触动的陈能宽忽然吟诵起诸葛亮的《出师表》“臣受命之日，寝不安席，食不甘味……”在场的于敏也来了兴致，一人一句的接下去，狭小的会议室安静的没有其他声响。到后来，只听于敏一个人在吟诵，“夫难平者事也！……臣鞠躬尽瘁，死而后已……。”那一刻，在座所有人无不以泪洗面。那次原理实验的圆满成功，为我国中子弹技术奠定了坚实基础。婉拒“氢弹之父”称谓于敏生于一个天津小职员家庭，从小读书爱问为什么。对新知，探究其所以然。进入北大理学院后，他的成绩名列榜首。导师张宗遂说：没见过物理像于敏这么好的。清晰的概念、严密的逻辑、透过现象抓本质的功底、善抓“牛鼻子”的见解，深入浅出的表达……于敏的学术报告很“火”，头一天就有人占座位。1999年被国家授予“两弹一星”功勋奖章，他说这是集体的功劳。他婉拒“氢弹之父”的称谓。他说，核武器事业是庞大的系统工程，是在党中央、国务院、中央军委的正确领导下，全国各兄弟单位大力协同完成的大事业。“老于”的憾事“人们亲切地称他‘老于’。作为后辈，我们竭力沿着前辈们留下的震撼心灵的足迹，继续前行。”北京应用物理与计算数学研究所所长李华说。人，总有憾事。老于说，亏欠妻儿很多；妻走了，他想补偿，来不及了。今天，您走了于老，一路走好资料来源/新华社、军报记者'}, {'title': '赵正永深耕陕西官场十年 央视秦岭专题片中被点名', 'newssource': '澎湃新闻', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 15, 42), 'article': '原标题：赵正永深耕陕西官场十余年，央视“秦岭专题片”中被点名“学习大国”微信公号1月16日消息，十九届中央纪委三次全会闭幕仅2天，陕西省委原书记赵正永“落马”。中央纪委国家监委网站15日晚发布消息，“陕西省委原书记赵正永涉嫌严重违纪违法，目前正接受中央纪委国家监委纪律审查和监察调查。”据了解，赵正永是今年以来被查处的第二名中管干部，也是首名正部级官员。深耕陕西官场长达十余年，央视专题片被点名、没露面公开履历显示，赵正永生于1951年3月，安徽马鞍山人，早年在安徽工作，曾任马鞍山市委副书记、黄山市委书记，安徽省公安厅厅长、党委书记，安徽省政法委书记等职。2001年6月，赵正永调任陕西省委常委，自此在陕西工作十余年之久。到陕西后，赵正永先后任省委政法委书记，副省长、党组副书记。2010年5月升任陕西省委副书记，次月任代省长，2011年1月“去代转正”，晋升为正部级。2012年12月，赵正永任陕西省委书记，主政一方，至2016年3月卸任。次月，他转任第十二届全国人大内务司法委员会副主任委员，至2018年3月退休。值得关注的是，就在他退休数月后，2018年7月，由中央牵头的秦岭北麓违规建别墅问题专项整治工作拉开序幕。1月9日晚，中央电视台播发《一抓到底正风纪》新闻专题片，回顾了整个秦岭违建整治始末。不少人关注到，专题片中有多名领导干部出镜，而赵正永在这部片中仅是被点名却始终没有露面。专题片介绍，2014年5月13日，习近平总书记就秦岭北麓西安段圈地建别墅问题作出重要批示，要求陕西省委省政府主要负责同志关注此事。接到总书记的重要批示后，时任陕西省委主要领导没有在省委常委会上进行传达学习，也没有进行专题研究，只是简单地批示省委督察室会同西安市委尽快查清、向中央报送材料。“陕西省委主要领导”是谁？从时间节点可以看出，当时担任陕西省委书记的正是赵正永，秦岭北麓违建别墅事件正发生在他任职期间。陕西省委原常委、秘书长钱引安落马；陕西省人大常委会原党组副书记魏民洲落马，后因受贿罪被判无期徒刑；西安市原市长上官吉庆被处以留党察看两年处分，降为副厅级非领导职务。。。。。。秦岭违建别墅引发的反腐风暴“刮倒”了多名省部级干部，深耕陕西官场长达十余年的赵正永也迎来了他的结局。中央巡视组两次巡视陕西，曾点名省委领导重表态、抢“头彩”等问题2014年7月30日至9月28日，中央第七巡视组对陕西省进行了巡视。随后公布的反馈意见称，陕西少数领导干部在矿产资源、土地出让、工程建设、房地产开发和选人用人等方面以权谋私，虚报冒领、侵吞挪用各类专项资金等损害群众切身利益的腐败问题还较突出；在干部选拔任用方面，执行政策规定不够严格，存在“带病提拔”、说情打招呼、超职数配备干部、领导干部兼职清理不彻底等问题。记者注意到，时任陕西省委书记的赵正永还在巡视反馈会上表示，中央巡视组的反馈意见，指出问题针对性强、提出建议中肯明确，是猛药去疴的“良方”，也是“严字当头、管处用力”遏制腐败的重要契机。我们一定要把贯彻落实好反馈意见作为从严管党治党的新起点，主动认领、认真反思问题，逐项提出整改方案，坚持不懈抓好整改，从严从实查办案件，以实实在在的整改成效让中央放心、让群众满意。2017年2月26日至4月26日，中央第十一巡视组对陕西省开展了巡视“回头看”。反馈意见指出，省委领导不够坚强有力，贯彻落实习近平总书记系列重要讲话精神不够到位，存在重表态、抢“头彩”，轻结合、疏落实现象；干部选任程序不够规范，选人用人问题反映集中；矿产资源领域存在廉洁风险；上轮巡视提出的超职数配备干部、违规兼职，领导干部多占住房、“文山会海”等整改不力等。对此，有媒体报道称，这一轮巡视“回头看”实际上主要还是针对赵正永担任省委书记期间的一些问题，其中的诸多问题指向的正是赵正永担任省委书记期间怠政。“赵正永被查处，再次说明不论什么人，不论职务多高、资历多深、背景多大，不论是现职、离任、退休，只要触犯了党纪国法，就要一查到底，决不手软。”中央纪委国家监委网站今天在头条位置发布《赵正永被查：巩固发展压倒性胜利的生动体现》一文称，这是巩固发展反腐败斗争压倒性胜利的生动体现，充分表明了以习近平同志为核心的党中央深入推进全面从严治党、一刻不停歇将反腐败斗争进行到底的决心坚定如磐。来源：李源/微信公众号“学习大国”'}, {'title': '河北政府工作报告中这“三件大事” 件件事关北京', 'newssource': '新京报', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 15, 35), 'article': '原标题：河北省政府工作报告中的这“三件大事” 件件事关北京新京报快讯（见习记者 姜慧梓）京津冀协同发展、雄安新区规划建设、冬奥会筹办“三件大事”一同被写进2019年河北省政府工作报告。而这“三件大事”的实施，件件事关北京。1月14日，河北省十三届人大二次会议开幕，河北省省长许勤在作政府工作报告时表示，“三件大事”的实施，有力推动了北京新两翼和河北两翼的形成。此前，党中央、国务院批复同意《河北雄安新区总体规划（2018-2035年）》，当中指出，要按照高质量发展的要求，推动雄安新区与北京城市副中心形成北京新的两翼，以2022年北京冬奥会和冬残奥会为契机推进张北地区建设形成河北两翼，促进京津冀协同发展。2018年，“三件大事”扎实有效推进在回顾2018年工作成绩时，许勤一一列举，“一年来，‘三件大事’扎实有效推进，84项京津冀协同发展年度任务基本完成，党中央、国务院批复同意雄安新区规划纲要、总体规划、白洋淀生态环境治理和保护规划，雄安新区规划体系基本形成，2022年冬奥会张家口赛区76个冬奥项目开工65个。”而在距离石家庄200多公里的北京，同日开幕的北京市十五届人大二次会议上，政府工作报告中也出现了“三件大事”的身影，“推动京津冀地区成为引领高质量发展的重要动力源”“切实做到雄安新区需要什么就主动支持什么”“全力做好冬奥会、冬残奥会筹办工作”。2019年，坚持以承接北京非首都功能疏解为“牛鼻子”2019年，河北省将继续深入实施重大国家战略。报告指出，推动京津冀协同发展向深度广度拓展。坚持以承接北京非首都功能疏解为“牛鼻子”，加快“三区一基地”建设，持续推动重点领域取得新突破。加快雄石城际、京秦高速等项目建设，全力支持北京城市副中心和大兴国际机场建设，推动廊坊北三县与通州区协同发展。在推进雄安新区规划建设方面，报告特别指出，2019年，有序承接高校、科研院所、医疗机构、企业总部、金融机构、事业单位等北京非首都功能。同时，报告还强调，要扎扎实实做好冬奥会筹办工作。高质量建设冬奥场馆和配套基础设施，确保年内全部竞赛场馆主体完工。京张高铁、延崇高速主线建成通车。新京报见习记者 姜慧梓'}, {'title': '钱三强曾评价于敏：他填补了中国原子核理论空白', 'newssource': '军报记者', 'comments': 846, 'editer': '刘光博 ', 'dt': datetime.datetime(2019, 1, 16, 15, 29), 'article': '原标题：致敬于敏：那个隐姓埋名的人氢弹，又称热核武器，属于核武器的一种。主要利用氢的同位素（氘、氚）的核聚变反应所释放的能量来进行杀伤破坏，属于威力强大的大规模杀伤性武器。1972年1月7日，我国彝族飞行员杨国祥驾机投掷氢弹，这一次，他成功地投掷了我国第一枚实用氢弹，举国欢腾，世界震惊！时间回到1964年10月，我国第一颗原子弹爆炸成功。作为核弹家族的一员，原子弹，中国有了。但是国际上真正意义上的战略核武器都是指威力更大的氢弹，氢弹成为新中国核弹家族亟待补充的重要一员。当时正在中国近代物理所进行理论研究的于敏，接受了一项国家重任，在重重技术封锁的国际环境中，从零开始研制氢弹。在氢弹的理论探索中，于敏几乎从一张白纸开始。依靠自己的勤奋，举一反三，克服重重困难，自主研发。在中国氢弹原理突破中解决了一系列基础问题，提出了从原理到构形基本完整的设想。此后长期领导核武器理论研究、设计，解决了大量理论问题。1967年6月17日，我国成功地空投爆炸了第一颗氢弹，爆炸威力同于敏计算的结果完全一致。试验成功的这一刻，于敏并没有在现场，而是在北京守候在电话旁，他早已成竹在胸。“我这个人不大流泪，也没有彻夜不眠，回去就睡觉了，睡得很踏实。”从第一颗原子弹爆炸到第一颗氢弹试验成功，美国用了7年3个月，前苏联用了6年3个月，英国用了4年7个月，法国用了8年6个月。而中国人只用了2年8个月的时间，创造了研制氢弹的世界纪录。2014年度国家科学技术奖励大会上，我国著名核物理学家、核武器研究和国防高技术发展的领军人物、中科院院士于敏被授予了中国科技领域的最高荣誉——国家最高科学技术奖。60多年的科研生涯中，只要国家需要，于敏都欣然从命，并不断在新的领域取得突破。于敏说，人的名字，早晚是要没有的，能把微薄的力量融进祖国的强盛之中，人生足矣！由于保密的原因，这位核物理学家、中国科学院院士的著述多未公开发表，连他的妻子都说：“没想到老于是搞这么高级的秘密工作的。”2018年12月18日，党中央、国务院授予于敏同志改革先锋称号，颁授改革先锋奖章，并获评“国防科技事业改革发展的重要推动者”。科学家对于敏的评价：科学家 钱三强：于敏填补了中国原子核理论的空白。科学家 彭桓武：原子核理论是于敏自己在国内搞的，他是开创性的，是出类拔萃的人，是国际一流的科学家。科学家 朱光亚：于敏在氢弹研制中发挥了关键作用。诺贝尔奖得主、核物理学家玻尔：于敏是“一个出类拔萃的人”，是“中国的氢弹之父”。今天，我们回望过去，再次向他致敬！'}, {'title': '于敏的一切长期保密 学术成果几乎没公开场合发表', 'newssource': '观察者网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 15, 25), 'article': '原标题：于敏：学术成果几乎没有发表在公开的场合据@光明日报 1月16日消息，来自中国科学院的消息，我国国防科技事业改革发展的重要推动者、改革先锋于敏，于1月16日在京去世，享年93岁。于敏是新中国氢弹研究中的关键核心人物。他在中国氢弹原理突破中解决了一系列基础问题，提出了从原理到构形基本完整的设想，起了关键作用。1965年10月，在于敏的亲自组织和部署下，氢弹理论得以突破。目前全世界只有两种氢弹构型，美国的T-U构型和中国的于敏构型。于敏此后长期领导核武器理论研究、设计，解决了大量理论问题。于敏对中国核武器进一步发展到国际先进水平作出了重要贡献。从20世纪70年代起，在倡导、推动若干高科技项目研究中，发挥了重要作用。 1982年获国家自然科学奖一等奖。1985年、1987年和1989年三次获国家科技进步奖特等奖。1994年获求是基金杰出科学家奖。1999年被国 家授予“两弹一星”功勋奖章。1985年荣获“五一劳动奖章”。1987年获“全国劳动模范”称号。由于核武器的保密原因，于敏的一切长期以来都处于高度保密中。从1976年到1988年，于敏的名字是保密的，直到1988年以后，于敏才获得出国进行学术交流的机会。由于工作的关系，于敏首次出国是以某大学教授的身份去美国访问的。在不到一个月的时间内，尽管去了许多地方，但他始终像个“哑巴”：要问也不方便问，要说也不方便说，很不好受。于敏2015年获获2014年度国家最高科技奖时，观察者网曾刊登文章《中国“氢弹之父”于敏：学术成果几乎没有发表在公开的场合》，文章提到“于敏这个名字对于大部分普通的中国人来说，不如邓稼先、钱学森等与他同时代的科学伟人那么著名，他的学术成果，几乎没有发表在公开的场合；连他的名字，在1988年前都不为人知。至于他的成就，网上一位朋友的评价我觉得是恰如其分的：‘最高科学奖能颁给于敏，是这个奖项的荣幸！’”文章称，在现实技术条件下真正行得通的氢弹构型目前广为人知的就只有T-U构型一种，但“于敏构型”或者叫“于-邓构型”（于敏-邓稼先）则很可能与T-U构型不同，是世界上仅有的两种可行氢弹构型之一。一向喜欢指责中国窃取其军事机密的美国在搜集到中国氢弹爆炸的相关数据后，就一直没有指责中国在这个问题上窃取过美国的秘密，并且这个“于敏构型”的说法也是他们提出来的。考虑到中国研制氢弹时的国力水平，不可能如美国50年代研制“超级炸弹”投入那么多人力物力，“于敏构型”就更是不容易。目前，关于T-U构型和于敏构型的猜测很多，也有一些公开资料，但是可以肯定的是，其中充满了如同“氘化锂管子”这样的误导，因为世界上还有很多国家想要搞明白氢弹是怎么回事。文章称“围绕着于敏，还有太多的未解之谜，我们不可能知道他在90年代以后到底做了什么研究，也不知道为何在上世纪80-90年代反复多次在“两弹一星”功臣奖，国家科技进步特等奖等等奖项之后，今天（指2015年向于敏颁发2014年度国家最高科技奖）突然又要为于老再颁发一次最高科学奖。 ”只能推测，某些于老参与的项目，在2014年取得了重大突破——我们知道于老多年前曾提出惯性约束可控核聚变方面的重要建议。如果真的是这方面的突破，那将是不亚于“于敏构型”的第二个巨大成就，一个人一生中能取得两个这样分量的成就，就连历史上的科学巨匠也很难做到。文章最后称“能拥有于敏，这是中国的荣幸！”'}, {'title': '日媒问“为何想要两岸统一” 这位台湾人霸气回应', 'newssource': '海外网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 15, 24), 'article': '原标题：被日媒问为何想要两岸统一 这位台湾人霸气回应海外网1月16日电 日前，有日本媒体询问台湾统派人士张安乐，“为什么希望两岸统一”，他强调，身为中国人，当然希望中国能够统一。据台媒报道，长期在岛内推动两岸统一的中华统一促进党总裁“白狼”张安乐16日表示，日前有日本媒体问他，“为什么希望台湾和大陆统一？”他以日本为例指出，日本统一之后就从二流国家变为一等强国，所以他当然希望中国早日统一。张安乐称，日本在1868年以前，只是一个二流国家，藩镇割据，各自为政，无从建设。1868年明治年间，日本完成统一后，开始集全国之力发展经济，完成工业现代化，一跃成为世界一等强国。“历史告诉我们国家统一的重要性，身为一个中国人，当然希望我们中国能早日统一。”张安乐长期支持两岸统一，曾直言岛内应该拥抱中华人民共和国。去年6月，张安乐曾率领统促团体、“拔菜总部”人士聚集向蔡英文抗议，呼吁蔡英文要承认自己是中国人。他还向台军喊话称，现在“台独”当道，让台军去做炮灰，台军千万不要上“台独”的当。此外，张安乐还曾率领抗议民众向“美国在台协会”送上写着“悬崖勒马”的匾额，呼吁美国人不要在两岸制造事端，否则倒霉的是台湾老百姓。去年8月，中华统促党遭到蔡当局搜索，张安乐大骂“太可恶了”。更痛批蔡英文、赖清德等人嘴上说爱台湾，其实是爱台币。他表示，现在台湾的政治人物把台湾推向战争的深渊，但如果真的走到这一步，政治人物跑得跑、逃得逃。（海外网 杨佳）'}, {'title': '媒体:马英九称“九二共识”是台湾的“保命仙丹”', 'newssource': '参考消息', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 15, 24), 'article': '原标题：海外媒体：马英九称“九二共识”是台湾的“保命仙丹”参考消息网1月16日报道 海外媒体称，对于岛内近来“九二共识”议题的发酵，台湾地区前领导人马英九16日接受采访时称，“九二共识”“还有未来”，并重申“九二共识”不是一方片面的说法，而是双方的共识，它是两岸最好的方式，“是我们的保命仙丹！”据新加坡《联合早报》网站1月16日援引台湾媒体报道，马英九表示，“九二共识”是确实存在的东西，蔡英文在否定“九二共识”的同时也否定了台湾自己，但她想让“九二共识”死掉这件事情不会成功，因为“九二共识”让两岸可以求同存异，从大局来看是最好的。马英九也强调，高雄市长韩国瑜竞选时曾两次高喊支持“九二共识”，这就是台湾该采取的立场，未来可以看看韩国瑜与蔡英文的说法，哪一种会更有力量。此外，对于最近美国对两岸问题是否介入得越来越深，马英九表示，蔡英文想靠美国的力量解决两岸问题，但两岸问题靠美国、靠日本都没用，美国人也没有那么大的能耐可以解决两岸问题。'}, {'title': '利物浦大学中文提醒学生别舞弊 学生批：种族歧视', 'newssource': '环球网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 15, 8), 'article': '原标题：利物浦大学中文提醒学生不要舞弊\xa0校长：为错误带来的伤害道歉[环球网报道 记者 朱梦颖]“我们发现，有中国学生经常不能理解英语中‘cheating’一词是什么意思，所以我们提供了翻译：舞弊。”上面这句话，出现在英国利物浦大学学生服务中心福利咨询与指导部门1月14日发给国际留学生的考试建议的邮件中。据英国《利物浦回声报》15日消息，学生服务中心还在邮件中特意用中文标注：“不幸的是，每年都有部分国际留学生违反学校的考试规定，这可能是无意的不当行为，也可能是故意作弊。一旦被发现cheating（舞弊），学生将面临严重后果，譬如取消成绩、休学一年或直接退学。”利物浦大学的这个“看似善意提醒”的操作，立即引发了中国留学生的不满。“我个人认为，这是绝对无法接受且不恰当的，这基本就是种族主义。”一位中国留学生向该报说道。还有学生直接回怼利物浦大学的做法：“我不认为cheating是一个难理解的单词。”还有学生在国外社交媒体上@利物浦大学：“难以置信，恶心。已经2019年了，还有一些愚蠢的大学工作人说说这些种族歧视的话。”↓有网友则是直接以同样的方式回击利物浦大学的做法：“这里是利物浦大学。我发现有些英国员工不能理解中文里‘种族歧视’一词的意思，因此我提供了翻译：racism。”↓除此之外，更有超过1000人在公益请愿网站change.org上签名，要求利物浦大学校方就此事公开道歉。请愿书写道：“这是一种不负责任、傲慢且带有歧视性的行为，它伤害的所有国际学生，尤其是那些来自中国文化的学生。我们特此要求利物浦大学向所有国际学生公开道歉。”北京时间1月15日晚10时52分，英国利物浦大学官方微博发布了中英文《校长声明》一文，该校校长Janet Beer教授在声明中作出了公开致歉。致歉全文如下↓Dear students亲爱的同学们I am writing to apologise following the email issued to all international students from our international advice and guidance team yesterday。 There was a paragraph in this email which caused significant offence and has upset our students， parents and partner organisations。 This was a mistake and is not representative of the high regard in which the University holds its Chinese students。 It was wholly inappropriate and I apologise wholeheartedly for the offence it has caused。我特此对昨天大学国际学生咨询和指导团队发给所有国际学生的一封电子邮件表示歉意。这封电子邮件中的一段话引起了学生，家长以及大学合作伙伴机构的反感，并对他们的感情造成了严重伤害。这是一个错误，而这个错误并不代表大学对中国学生的尊重态度。这个错误非常不妥，我在此诚恳地为它所带来的伤害道歉。We at the University of Liverpool are extremely proud to be an international university and are equally proud of our strong links with China and XJTLU。 We value and respect cultural diversity and are extremely grateful that so many international students come to study with us and enrich our campus and city。我们为利物浦大学是一所国际大学感到十分自豪，同时也非常荣幸能够与中国的西交利物浦大学以及其它合作伙伴建立紧密合作。我们重视且尊重文化多样性，并且感谢那些选择来我校求学的国际学生，正是他们丰富了我们的校园和城市文化。We take full responsibility for the mistake made and will review our procedures and take appropriate action to ensure nothing of this nature happens again。我们对这个错误承担全部责任。我们将会审查工作流程，并采取适当的措施以确保此类问题不再发生。My heartfelt apologies once more for the offence caused。我再次为这次事件所造成的伤害表示衷心的道歉。Kind regards由衷的问候Professor Dame Janet BeerVice-Chancellor， University of LiverpoolJanet Beer教授女爵士利物浦大学校长在这封声明之下，大部分中国网友觉得校长的道歉“还比较诚恳”。“希望不要再有第二次了，中国留学生不需要‘优待’。”↓所以，既然道歉了，就希望以后不要再出现类似的事情了。↓但也有网友认为，道歉满敷衍，是“典型公关文”。'}, {'title': '河南提高乡村教师待遇：越艰苦补助越高', 'newssource': '新京报', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 59), 'article': '原标题：河南提高乡村教师待遇：越艰苦补助越高 最高每月补八百新京报快讯（见习记者 陈丽媛）1月16日，据河南省教育厅发文，2019年河南省将集中对特困地区教师进行生活补助，在原有的基础上，提高特困地区义务教育学校乡村教师生活补助标准，并依据艰苦边远程度实行差别化补助，将乡、村、教学点教师生活补助分别提高到200元/月、500元/月和800元/月。为保障教师工资待遇，河南省人社厅联合省财政厅建立中小学教师工资待遇政策落实联合督查工作机制，力图强化政府在保障教师工资待遇、维护教师合法权益方面的职责。2018年，河南省教育厅致力于建设干部、教师和人才队伍，提高和保障教师工资福利待遇，不断增强教师的获得感和荣誉感。为此，河南省各高校公开招聘，支持高校引进高层次和急需紧缺人才，为高校人才招聘广开“绿色通道”。2018年省属高校公开招聘1788人，其中博士研究生1394人（含招才引智大会现场办理博士引进617人），博士人数较上年度增加15.2%。并举办招才引智活动，各高校通过现场招聘、网络招聘面向海内外提供了5545个人才需求岗位，共收到简历7498份，达成签约意向人数1099人，办理绿色通道签约手续720人。2018年，河南省各级教师资格认定机构共认定各级各类教师资格190408人，其中：高校11164人，幼儿园43367人，小学57171人，初中33169人，高中43104人，中职2433人。开展教师资格定期注册试点并进行专项培训。在人才培养方面，河南省实施重点人才工程建设。全省教育系统遴选737名教育厅学术技术带头人、297名教育厅优秀教育管理人才；评选产生31名全省首批“中原千人计划-中原教学名师”。除人才培养外，全省注重对各类教育干部的专项培训。2018年，共举办各类教育干部培训31期，培训中小学校、幼儿园园长、教育行政管理干部等4400余人次。举办河南省高考制度与课程改革高级研修班。实施中小学名校长培养对象培育工程，名校长工程成为教育干部培训工作的品牌工程，面向贫困地区进行专项培训校园长138名。在深化职称制度改革，健全职称评价机制上，河南省全面下放高校职称评审权，加强对高校自主评审工作的指导、监督和服务；修订完善教师系列评审标准，对长期在乡村基层和艰苦边远地区任教的教师，在职称评定方面予以倾斜。新京报见习记者\xa0陈丽媛'}, {'title': '我国氢弹之父于敏去世享年93岁 曾隐姓埋名28年', 'newssource': '澎湃新闻', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 50), 'article': '原标题：我国氢弹之父于敏去世，享年93岁@光明日报1月16日消息，来自中国科学院的消息，我国国防科技事业改革发展的重要推动者、改革先锋于敏，于1月16日在京去世，享年93岁。于敏毕业于北京大学，后被著名物理学家钱三强、彭桓武调到中科院近代物理研究所。他与合作者提出了原子核相干结构模型，填补了我国原子核理论的空白。1961年，于敏开始了长达28年隐姓埋名的氢弹理论探索任务，并取得了我国氢弹试验的成功，为我国科技自主创新能力的提升和国防实力的增强作出了开创性贡献。在2018年召开的庆祝改革开放40周年大会上，党中央、国务院决定，授予于敏等100名同志改革先锋称号，颁授改革先锋奖章。（记者李苑、陈海波、齐芳）来源：@光明日报'}, {'title': '72岁退休干部被查:15年前因严重失职遭罢免后退休', 'newssource': '澎湃新闻', 'comments': 846, 'editer': '刘光博 ', 'dt': datetime.datetime(2019, 1, 16, 14, 35), 'article': '原标题：常州一72岁退休干部被查：15年前因严重失职遭罢免后退休1月16日，江苏省纪委监委援引常州市纪委市监委消息：常州高新技术产业开发区原党工委书记、管委会主任顾黑郎涉嫌严重违纪违法，目前正在接受纪律审查和监察调查。澎湃新闻注意到，顾黑郎出生于1947年11月，目前已72岁，另外，这名干部退休已有15年。公开简历显示，顾黑郎曾任江苏常州市新区工委书记，常州市新区管委会主任、常州高新区发展（集团）总公司总经理等职，1999年8月任常州高新技术产业开发区工委书记、管委会主任，后于2002年4月任常州市新北区委员会书记，两年后的2004年2月转任常州市人大常委会副主任。不过，担任常州市人大常委会副主任不久，2004年4月28日，顾黑郎即因严重失职被江苏省纪委给予留党察看处分，并被罢免常州市第十三届人大常委会副主任职务，后于2004年10月正处级退休，当时他57岁。澎湃新闻查询发现，顾黑郎受到处分源于江苏铁本钢铁有限公司违规建设钢铁项目。据新华社2004年的报道，江苏铁本钢铁有限公司自2002年初筹划在常州市新北区魏村镇、镇江扬中市西来桥镇建设新的大型钢铁联合项目。该项目设计能力840万吨，概算总投资105.9亿元人民币，2003年6月进入现场施工，2004年3月江苏省政府责令全面停工。经查，2002年5月以来，为实施该项目，铁本公司法人代表戴国芳先后成立7家合资（独资）公司，把项目化整为零，拆分为22个项目向有关部门报批。2002年9月至2003年11月，常州国家高新技术产业开发区管委会、江苏省发展计划委员会、扬中市发展计划与经济贸易局先后越权、违规、拆项审批了铁本合资公司的建设项目。铁本公司未取得环保部门批复环境影响评价报告书即开工建设，严重违反了国家环境保护法、环境影响评价法的有关规定。其中，2003年以来，常州高新区管委会、扬中市政府在未依法办理用地审批手续的情况下非法批准铁本公司征用、占用土地，并违规组织实施征地拆迁，导致铁本公司违法占用土地6541亩（其中耕地4585亩，含基本农田1200亩）已无法复垦，造成大量耕地被毁。2003年12月，江苏省国土厅违规批准了常州市涉及铁本公司的14个批次的土地5988亩，致使铁本公司项目部分非法占地合法化。根据检查结果，江苏省委、省政府和银监会已对涉及失职违规的8名政府和有关银行的相关责任人分别给予党纪、政纪处分及组织处理。其中，建议依法罢免顾黑郎江苏省常州市人大常委会副主任职务，给予留党察看一年处分。另外，1月15日，常州还有一名干部被通报涉嫌严重违纪违法正在接受纪律审查和监察调查，即市人大常委会原副主任张东海。张东海，男，汉族，1961年9月出生，1984年8月参加工作，他曾任常州市高新区党工委书记、新北区委书记等职，2015年任常州市第十五届人大常委会副主任，后于2017年2月19日起不再担任常州市人大常委会副主任。'}, {'title': '韩国队主帅：定要赢下中国队 要大胆进攻', 'newssource': '环球网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 34), 'article': '原标题：韩国队主帅本托：定要赢下中国队 孙兴慜是否上场未定[环球网综合报道]北京时间1月16日21时30分，中国队将在阿联酋首都阿布扎比的赛场迎来宿敌韩国队，两队将进行2019亚洲杯C组头名争夺战。中国队主帅里皮在15日的赛前发布会上表示，将在比赛中轮换部分主力球员，尽力去进攻。韩国队主帅保罗·本托表示，韩国队定要赢下中国队，要大胆进攻，而韩国头号球星孙兴慜是否上场仍待定。中韩赛前的新闻发布会当地时间15日举行。据北京日报报道，在谈到本场策略，国足主帅里皮表示，首先要在防守上注意力集中，以我为主，尽力去进攻，而不要保守。在保持防守强度的情况下持续进攻，打出勇气，踢出特点。里皮还表示，武磊不会参加与韩国队的比赛，但肯定会参加1/8决赛。另一方面，韩国队主帅保罗·本托带领韩国队队员出席发布会。据韩国《star news》16日报道，本托表示，即使平局中国队也会是小组第一，“因此韩国一定要赢下这场比赛。即便有一定风险也要进攻。”他还表示，里皮经验丰富，能力优秀，很了解亚洲足球，相信中韩两队的对决将是一场精彩的比赛。对于刚结束英超联赛赶到阿布扎比的孙兴慜是否上场，本托称，16日将决定其是否出战。本托认为，孙兴慜是重要的选手，其上与不上场有一定差异，届时将综合考虑孙兴慜的状态、身体情况和训练等决定其是否首发出场。'}, {'title': '民调力压蔡英文将选2020？柯文哲的反应令人意外', 'newssource': '海外网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 27), 'article': '原标题：民调力压蔡英文将选2020？柯文哲的反应令人意外海外网1月16日电 近日，在台湾一项“2020年大选民调”中，柯文哲民调力压蔡英文夺冠。15日，柯文哲在接受采访时，有媒体询问，是否会因此考虑参加2020年台湾地区领导人选举？柯文哲却反问称，“我不知道，那个（民调）准吗？”据台湾《东森新闻云》报道，“台湾政治大学研究中心”日前公布民调，在2020年的台湾地区领导人选举中，台湾民众对于柯文哲的支持度为38.7%，对国民党2020“大选”角逐者朱立伦的支持度为21.5%，对于蔡英文的支持度仅有15.3%，台媒称，柯文哲可以说是“力压”蔡英文。15日，柯文哲在接受采访时被媒体问及，现在支持度这么高，是否会考虑参加2020年台湾地区领导人选举？柯文哲沉默了几秒后称，“我不晓得，这个（民调）准吗？”随后，柯文哲表示，民调跟个人声势不是一回事，两个不能划等号，还称自己比较注重整个长期的趋势。媒体进一步追问称，“但你个人声势和支持度都蛮高，是不是意味着2020年有可能？”对此，柯文哲却表示，“哎呦，你们不要再问这个问题啦。”台北市长柯文哲一向被台媒视为参加2020“大选”的候选人之一，因此台媒此前也是三番四次地追问。据海外网此前报道，9日，柯文哲曾表态称自己“没有”要参加2020台湾领导人选举。他称，自己完全没有准备，到现在为止他都没有准备。而被问到自己之前所讲的“仍在储备能量”是什么意思，柯文哲回答，储备能量不一定要选2020。柯文哲还吐槽台湾地区的政治制度，直言过去20年来，台湾当局行政效率低下，政策换来换去，谁来当领导人都做不好。因此他自己本人的意愿不是太高。柯文哲虽已表态称自己完全没有准备要参加2020年的台湾地区领导人选举，但有台媒表示，作为热门人选，柯文哲的动向和表态将会一直是媒体关注的焦点。（海外网 张莎莎）'}, {'title': '事关所有干部 习近平这个内部讲话首次公开', 'newssource': '海外网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 23), 'article': '原标题：事关所有干部！习近平这个内部讲话首次公开[学习小组按]习近平在众多书籍中，尤其爱读史书。他将历史形容为最好的“老师”、“教科书”、“百科全书”。2019年刚开年，习近平就写了一封致中国社会科学院中国历史研究院成立的贺信，强调：“历史研究是一切社会科学的基础。”“历史是一面镜子，鉴古知今，学史明智。”2018年最后一次中央政治局集体学习，主题就是中国历史上的吏治。《求是》杂志2019年第2期发表了习近平在这次集体学习上的讲话《努力造就一支忠诚干净担当的高素质干部队伍》。习近平用一整段文字以毛泽东为例，强调我党重视研究和借鉴历史的优良传统。并引用了墨子、韩非子、孟子、诸葛亮、司马光、龚自珍等先贤关于官吏选拔和管理的真知灼见，也点出了我们必须剔除的“封建糟粕”：任人唯亲，结党营私，用人不公，买官卖官，人身依附，党争不绝，贪婪奢靡，鱼肉百姓，官本位严重，一人得道、鸡犬升天……最后习近平总结了我们打造干部队伍的4条经验：第一，严把德才标准。第二，坚持公正用人。第三，拓宽用人视野。第四，激励干部积极性。其中，习近平用了很多生动的语言为一些无德、无能的政治“两面人”画像：会上信誓旦旦讲“四个意识”、高调表态，而私下里却妄议中央、不贯彻党中央路线方针政策的人；……领导面前卑躬屈膝、阿谀奉承、溜须拍马，而在下属和群众面前却趾高气扬、盛气凌人、不可一世的人。……在纷繁复杂的形势变化面前，耳不聪、目不明，看不清发展趋势，察不出蕴藏其中的机遇和挑战；……一到大风大浪来了就没主见了，总希望一切都太太平平的，工作思路也就是这个思路，求稳心态有余，斗争精神不足。对于引起强烈共鸣的“把干部从一些无谓的事务中解脱出来”，习近平作为一个值得注意的问题特别提了出来，“现在基层干部说‘上面千把锤、下面一根钉’，‘上面千把刀、下面一颗头’。这种状况必须改变！”习近平提出了两个要求：一是要加强信息资源共享，不能简单以留痕多少、上报材料多少来评判工作好坏。二是要控制各级开展监督检查的总量和频次。更多内容，请看全文。我们学习中国历史上的吏治，目的是了解我国历史上吏治的得失，为建设高素质干部队伍提供一些借鉴。重视吸取历史经验是我党的好传统历史是最好的教科书，历史是人类最好的老师。历史记述了前人的成功和失败，重视、研究、借鉴历史，了解历史上治乱兴衰规律，可以给我们带来很多了解昨天、把握今天、开创明天的启示。重视吸取历史经验是我们党的一个好传统。毛泽东同志说：“今天的中国是历史的中国的一个发展；我们是马克思主义的历史主义者，我们不应当割断历史。从孔夫子到孙中山，我们应当给以总结，承继这一份珍贵的遗产。这对于指导当前的伟大的运动，是有重要的帮助的。”延安时期，环境那么严酷，任务那么繁重，毛泽东同志仍然十分重视研究和借鉴历史。今天，我们进行伟大斗争、建设伟大工程、推进伟大事业、实现伟大梦想，更需要重视、研究、借鉴历史。这对我们丰富头脑、开阔眼界、提高修养、增强本领具有重要意义。历史和现实证明：为政之要，惟在得人我国历朝历代都重视官吏选拔和管理，中国历史上凡是有作为的政治家都懂得，“为政之要，惟在得人”、“育材造士，为国之本”的道理，在吏治方面留下了很多思想和做法，其中不乏真知灼见。比如，《墨子》中说“国有贤良之士众，则国家之治厚；贤良之士寡，则国家之治薄”，韩非子说“宰相必起于州部，猛将必发于卒伍”，孟子说“故天将降大任于是人也，必先苦其心志，劳其筋骨，饿其体肤，空乏其身”，诸葛亮说“为人择官者乱，为官择人者治”，司马光提出“凡用人之道，采之欲博，辨之欲精，使之欲适，任之欲专”，龚自珍写道“我劝天公重抖擞，不拘一格降人才”，等等。当然，我国古代吏治思想和做法既积累了丰富的治吏经验，也带有明显的历史和阶级局限，其中有不少封建糟粕，这是我们必须注意的。正确的政治路线要靠正确的组织路线来保证。历史和现实都表明，一个政党、一个国家能不能不断培养出优秀领导人才，在很大程度上决定着这个政党、这个国家的兴衰存亡。我们党之所以能够始终保持强大的创造力、凝聚力、战斗力，成为革命、建设、改革事业发展的中流砥柱，团结带领人民战胜各种艰难险阻、取得一个又一个胜利，一个十分重要的原因就在于高度重视培养造就能够担当重任的干部队伍。新时代，我们党要团结带领人民实现“两个一百年”奋斗目标、实现中华民族伟大复兴的中国梦，必须贯彻新时代党的组织路线，努力造就一支忠诚干净担当的高素质干部队伍。造就高素质干部队伍的4条经验第一，严把德才标准。德才兼备，方堪重任。古人讲：“德薄而位尊，知小而谋大，力小而任重，鲜不及矣。”选人用人重德才，是古今中外治国理政的通则，区别只是德才的内涵不同而已。我们党历来强调德才兼备，并强调以德为先。德包括政治品德、职业道德、社会公德、家庭美德等，干部在这些方面都要过硬，最重要的是政治品德要过得硬。《论语》中说要“修己以敬”、“修己以安人”、“修己以安百姓”，对我们共产党人来说，修己最重要是修政治道德。我们党对干部的要求，首先是政治上的要求。选拔任用干部，首先要看干部政治上清醒不清醒、坚定不坚定。选人用人必须把好政治关，把是否忠诚于党和人民，是否具有坚定理想信念，是否增强“四个意识”、坚定“四个自信”，是否坚决维护党中央权威和集中统一领导，是否全面贯彻执行党的理论和路线方针政策，作为衡量干部的第一标准。司马光说“君子挟才以为善，小人挟才以为恶。挟才以为善者，善无不至矣；挟才以为恶者，恶亦无不至矣”，“古昔以来，国之乱臣、家之败子，才有余而德不足，以至于颠覆者多矣”。政治上有问题的人，能力越强、职位越高危害就越大。政治品德不过关，就要一票否决。把好政治关并不容易，古人说“识人识面不识心”。党的十八大以来，我们查处了那么多违纪违规的领导干部，现在依然有不少领导干部受到查处。这些人大多是政治上的两面人，当面一套、背后一套，口头一套、行动一套。一些政治上的两面人，装得很正，藏得很深，有很强的隐蔽性和迷惑性，但并非无迹可寻。只要我们多用心多留心，多角度多方位探察，总能把他们识别出来。要高度警惕那些人前会上信誓旦旦讲“四个意识”、高调表态，而私下里却妄议中央、不贯彻党中央路线方针政策的人；口口声声坚定“四个自信”、信仰马克思主义，而背后在大是大非问题上态度暧昧、立场不稳的人；高谈阔论国家前途命运，而背地里却一遇到个人名誉地位就牢骚满腹、怨恨组织的人；领导面前卑躬屈膝、阿谀奉承、溜须拍马，而在下属和群众面前却趾高气扬、盛气凌人、不可一世的人。要透过现象看本质，既听其言、更观其行，既察其表、更析其里，看政治忠诚，看政治定力，看政治担当，看政治能力，看政治自律。正所谓“治本在得人，得人在审举，审举在核真”。以德为先，不是说只看德就够了，还得有过硬本领。当前，干部队伍能力不足、“本领恐慌”问题是比较突出的。比如，在纷繁复杂的形势变化面前，耳不聪、目不明，看不清发展趋势，察不出蕴藏其中的机遇和挑战；贯彻新发展理念、推进供给侧结构性改革，找不到有效管用的好思路好办法；面对信息化不断发展，不懂网络规律、走不好网上群众路线、管不好网络阵地，被网络舆论牵着鼻子走，等等。解决这些问题，既要加快干部知识更新、能力培训、实践锻炼，更要把那些能力突出、业绩突出，有专业能力、专业素养、专业精神的优秀干部及时用起来。第二，坚持公正用人。用人以公，方得贤才。历史上那些盛世治世，都同注重立公道、举贤良相关。公正用人是我们党立党为公、执政为民在组织路线上的体现，应该成为我们选人用人的根本要求。公正用人，公在公心。公心，归根到底是对党、对人民、对干部的责任心。有了公心，才能有识人之明、举贤之胆、容才之量，才能做到唯才是举、任人唯贤。一个地方一个单位，如果群众公认的优秀干部长期被冷落、受排挤，一些投机钻营的人却屡屡得势、顺风顺水，那就肯定出了问题。正所谓公道自在人心。组织部门和领导干部在选人用人上要出以公心，坚持原则、实事求是、敢于负责、公正无私，公平对待和使用干部，不拿原则做交易，使干部有全身谋事之心而无侧身谋人之虞。公正用人，公在事业。我们是为事业而用人的，不能凭领导者个人亲疏、个人好恶来取舍，也不能一味平衡照顾、论资排辈、降格以求，更不能把职务作为私相授受的个人资源。用错一个人特别是用错关键岗位的领导人，对一个地方、一个单位产生的负面影响是很大的。要从党和人民事业出发选干部、用干部，坚持事业为上、依事择人、人岗相适，做到事业发展需要什么样的人就用什么样的人，什么样的人最合适就选什么样的人。公正用人，公在风气。“人人好公，则天下太平；人人营私，则天下大乱。”选人用人上的不正之风同我们党的性质宗旨是格格不入的。经过党的十八大以来不断整治，选人用人风气有了明显好转，但选人用人上的不正之风并没有销声匿迹，有的依然相信“不跑不送、原地不动”、“又跑又送、提拔重用”那一套，变着法子拉关系、走门子；有的领导干部虽然调走了，却仍然干预曾经工作过的地方和单位的人事安排；有的人还在搞个人说了算，征求意见、集体讨论有名无实，组织程序只是走走过场，等等。对此，我们要采取有效措施，遏制住选人用人上的不正之风，做到善则赏之、过则匡之、患则救之、失则革之，把政治生态搞清明。第三，拓宽用人视野。把方方面面优秀人才聚集到党和人民事业中来，需要打开视野、不拘一格，充分盘活干部资源，把干部队伍和各方面人才作用充分发挥出来。人才难得，轻视不得，耽误不得。我国古代既有文王渭水访贤、周公吐哺礼贤、刘备三顾茅庐求贤、萧何月下追韩信的美谈，也有冯唐易老、李广难封的悲叹。冯梦龙在《新列国志》中说：“历览往迹，总之得贤者胜，失贤者败；自强者兴，自怠者亡。胜败兴亡之分，不得不归咎于人事也。”我们要从党和国家事业发展需要出发，以更高的站位、更宽的视野发现人才、使用人才、配置人才。陆游有一句诗写道：“人才自古要养成，放使干霄战风雨。”现在，我们一些干部最缺的是实践经验，特别是缺少在重大斗争中经风雨、见世面的经历。不少干部工作很勤奋，对自己要求也严格，但一到大风大浪来了就没主见了，总希望一切都太太平平的，工作思路也就是这个思路，求稳心态有余，斗争精神不足。要多选一些在重大斗争中经过磨砺的干部，这对优化干部队伍结构、提高科学决策水平和政策执行力大有好处。要加大遴选有这种经历干部的力度，同时要让没有实践经历的干部到重大斗争中去经受锻炼，在克难攻坚中增长胆识和才干。要注重从各个方面选拔专业化人才，优化领导班子和干部队伍知识结构、能力结构、专业结构。第四，激励干部积极性。全面从严治党的目的是更好促进事业发展。严管不是把干部管死，不是把干部队伍搞成一潭死水、暮气沉沉，而是要激励干部增强干事创业的精气神。把严管和干事创业分割开来、对立起来，把一些干部不担当不作为归咎于从严管理，这是不对的。从严管理干部是对干部真正负责，干部要领悟到党组织的良苦用心，习惯于在严格管理中工作生活，切不可把严格管理当成逃避责任、消极怠工的借口。干部敢于担当作为，这既是政治品格，也是从政本分。党的干部要以对党忠诚、为党分忧、为党尽职、为民造福的政治担当，以守土有责、守土负责、守土尽责的责任担当，面对大是大非敢于亮剑，面对矛盾敢于迎难而上，面对危机敢于挺身而出，面对失误敢于承担责任，面对歪风邪气敢于坚决斗争。要在选人用人上体现讲担当、重担当的鲜明导向，把敢不敢扛事、愿不愿做事、能不能干事作为识别干部、评判优劣、奖惩升降的重要标准，把干部干了什么事、干了多少事、干的事组织和群众认不认可作为选拔干部的根本依据，选拔任用敢于负责、勇于担当、善于作为、实绩突出的干部。好干部是选出来的，更是管出来的。严管就是厚爱，是对干部真正负责。要坚持从严教育、从严管理、从严监督，把从严管理干部贯彻落实到干部队伍建设全过程。同时，要用科学办法进行管理，切实管到位、管到点子上。干部管理是一门科学，要敢抓善管、精准施策，体现组织的力度；也是一门艺术，要撑腰鼓劲、关爱宽容，体现组织的温度。组织敢于担当，干部才会有底气。要在强化责任约束的同时鼓励创新、宽容失误。探索就有可能失误，做事就有可能出错，洗碗越多摔碗的几率就会越大。我们要正确把握失误的性质和影响，坚持我讲的“三个区分开来”，切实保护干部干事创业的积极性。把干部从无谓的事务中解脱出来还要注意一个问题，就是要把干部从一些无谓的事务中解脱出来。现在，“痕迹管理”比较普遍，但重“痕”不重“绩”、留“迹”不留“心”；检查考核名目繁多、频率过高、多头重复；“文山会海”有所反弹。这些问题既占用干部大量时间、耗费大量精力，又助长了形式主义、官僚主义。过去常说“上面千条线、下面一根针”，现在基层干部说“上面千把锤、下面一根钉”，“上面千把刀、下面一颗头”。这种状况必须改变！党中央已经对纠正这些问题提出了要求，各地区各部门各方面要抓好落实。要加强信息资源共享，不能简单以留痕多少、上报材料多少来评判工作好坏。能利用现有数据材料的就不要基层反复提供，不要为了图自己方便，同样的材料反复要、次次要、年年要，不要每个部门都去要同样的材料，不要什么人都去要材料。这方面要有个章法，把基层从提供材料的忙乱中解放出来。要控制各级开展监督检查的总量和频次，同类事项可以合并的要合并进行，减轻基层负担，让基层把更多时间用在抓工作落实上来。需要吸取的历史教训今天，我们了解我国历史上的吏治，是要借鉴我国历史上在吏治问题上形成的正确思想和有益做法，同时也是要认清我国封建社会在吏治问题上存在的种种弊端，如任人唯亲，结党营私，用人不公，买官卖官，人身依附，党争不绝，贪婪奢靡，鱼肉百姓，官本位严重，一人得道、鸡犬升天，吏治腐败更是我国历代王朝走向衰亡覆灭的一个重要原因。这是我们必须吸取的历史教训！我们党是全心全意为人民服务的马克思主义执政党，我们党的各级干部是人民的公仆、人民的勤务员，同历史上的官吏有本质的区别，我们的干部管理同历史上的吏治也有重大区别。我们总结分析我国历史上吏治的得失，是要加强和改进干部管理工作，为跳出历史周期率、实现党和国家事业兴旺发达、长治久安提供借鉴。（这是习近平总书记2018年11月26日在十九届中央政治局第十次集体学习时的讲话。）来源/《求是》杂志'}, {'title': '三年前很多人以为这是“中国的银行” 他们都错了', 'newssource': '中国新闻网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 19), 'article': '原标题：三年前，很多人以为这是家“中国的银行”，但他们都错了三年前的1月16日，当亚洲基础设施投资银行（AIIB）在北京正式开业时，不少人认为这是一家“中国的银行”，是专供中国的“提款机”。但三年后的今天，他们发现，“起初的担忧是杞人忧天”。“中国的银行”？亚投行由中国倡议成立，作为大股东，中国出资最多，投票权也最大。有些国家担心，亚投行会变成一家“中国的银行”。三年来，亚投行用行动证明，这是一家按国际高标准运行的多边金融机构，是一家具有21世纪公司治理标准的开发机构，是一个全球的联盟。三年间，亚投行成员从建立之初的57个迅速增加到93个。除了南极洲，各大洲都有亚投行成员。英、法、德等西方发达国家也打消顾虑相继加入。这种爆发式增长在多边开发机构中相当少见。“这是国际社会投出的一张信任票。”接受中新社国是直通车采访时，亚投行行长金立群表示，实践表明中国政府言必行、行必果，不直接干预银行经营，而是通过董事会发挥大股东应有作用，其规章制度和运作由各成员协商决定。对于新朋友，亚投行也始终敞开大门。谈及备受关注的美日两国会否加入亚投行，金立群表示，各国是否加入是其自身选择，不会影响亚投行与其合作。目前亚投行与美、日均保持良好沟通，与两国金融机构也有广泛接触。在未来的项目国际招标中，亚投行将对美日企业一视同仁。“一带一路”建设的“提款机”？“一带一路”倡议和亚投行均由中国发起，有些人便猜测这是中国的“战略算计”，也有人称亚投行将成为“一带一路”建设的“提款机”。金立群说，亚投行积极支持“一带一路”建设，“一带一路”和亚投行创立均源于中国，但都属于世界。这两个倡议都是开放包容的合作平台，是在全球化不断深入发展的形势下，中国倡议国际社会共同应对全球化挑战的现实性举动。2017年5月，亚投行和世界银行等6家多边开发银行和中国政府共同签署了关于加强“一带一路”倡议下相关领域合作的谅解备忘录，为沿线国家提供项目信息沟通与对接，加强能力建设提供帮助。但中国政府一开始就强调，创办亚投行的主要目的是为亚洲和其他地区发展中国家提供支持。三年间，亚投行累计批准项目投资逾75亿美元，已为东亚、东南亚、南亚、中亚、西亚、非洲等6个地区13个国家的基建项目提供了资金支持，覆盖交通、能源、电信、城市发展等多领域，带动各类公共和私营资本近400亿美元进入相关基础投资项目。印度、孟加拉国、埃及等国民众都从这些项目中受益。金立群说，“中国无意创办一个银行后自己从中大量借款”，但为了与周边国家实现互联互通，中国也可以使用一些相关资金。北京雾霾比较严重，为了应对气候变化，改善北京地区空气质量，亚投行在中国落地的首个项目选择了北京“煤改气”。今后亚投行对中国的支持还将继续推进。“但我们要挑选好的、关键的项目，并将其规模控制在一定范围内，避免影响对其他国家的借款。”金立群说。《日本经济新闻》评论说，亚投行成立之际外界有多种担忧，但现在“担忧出现减弱”，亚投行慎重对投资项目进行审查的姿态受到好评。“开业前对亚投行会随意对亚洲基础设施项目放贷、中国企业会不断取得订单的担忧，可以说是杞人忧天。”亚投行做对了什么？现在，这个由中国发起成立的多边开发机构已得到广泛认可。全球主要评级机构纷纷给予亚投行最高信用评级，包括联合国专门机构和区域开发银行在内的许多国际发展组织都与亚投行达成合作。欧洲复兴开发银行行长苏马·查克拉巴蒂称，与亚投行的合作关系是该机构与其他国际开发金融机构之间“最友好的关系之一”。北京学者接受中新社记者采访时认为，作为多边开发机构的“后起之秀”，亚投行之所以能在短短三年内有如此发展，主要得益于两件事。其一，坚持开放共赢，走国际化道路。在中国现代国际关系研究院世界经济研究所原所长陈凤英看来，亚投行有三个成功的做法：在接纳成员上不排外，一国不论大小、经济发展水平，只要有意向加盟，走完流程后即可加入；在业务上不局限于基础设施建设，不是“为基建而基建”，而是充分考虑到成员经济发展和环境保护的实际需要；在人员招聘上坚持面向全球而非只局限在成员内部，美日等非成员国员工也能在该机构任职，这在多边开发机构中非常少见。“在国际化方面，亚投行做的是最好的”，中国社科院世界经济与政治研究所国际政治经济学研究室主任徐秀军说，一方面，通过吸纳不同类型成员，亚投行为有基建需求的融资方和投资方提供了对接平台，对各参与方都是利好；另一方面，亚投行虽然由中国发起成立，总部也设在北京，但并未“特殊照顾”中国利益。目前，亚投行贷款项目大多给予了中国以外的成员。中国也未追求所谓“一票否决权”，而是明确表示随着成员逐渐增多，投票权占比将逐渐稀释。“这均表明亚投行在实践中不排他，而是坚持共享、包容、普惠的理念。”徐秀军说。其二，坚持高标准，走创新道路。金立群称，该机构在项目选择上有三个根本要求：财务可持续，项目不能赔钱；环境保护，项目应有利于改善环境而不是相反；得到所在地民众支持。他表示，亚投行在制度设计和架构上进行了一些创新，且内部每个重要决定都在充分酝酿讨论的基础上民主决策。此外，廉洁也是亚投行非常注重的准则。徐秀军认为，亚投行宗旨、目标、职能定位均非常明确，这是取得成功的一大要件。此外，通过制度创新，亚投行克服了现有多边开发机构的一些突出问题，如审批流程复杂、效率低下等。更难得的是，亚投行在效率与质量中取得了较好的平衡，没有为效率而牺牲质量。“国际化、高标准、透明度，是亚投行获得认可的重要原因。”陈凤英说，亚投行借鉴了多边开发机构的成功经验，也充分吸取了它们机构臃肿、效率低下等教训，可以说是站在前人肩膀上实现了更好发展。陈凤英称，今后中国为区域乃至全球提供公共产品时，也应参考亚投行的成功经验。除了平衡好中国自身利益和各国共同利益，还要稳扎稳打，不能急躁。亚投行未来要做什么？建立运营一家多边开发机构，长期可持续发展是关键，归根结底在于其从事的投资项目到底好不好。金立群说，在产业布局方面，亚投行的总体原则是合理平衡，但一定时间内会有所侧重。尤其在亚投行开展业务之初，将始终以基础设施为重心，其他生产性领域要控制在一定范围内。因为很多发展中国家基础设施依然较差，现在就推动其大力发展其他生产性领域比较困难，还需要一个国内技术力量培养的过程。但我们也会倾听借款国的意见，如果有一定需要，亚投行也可以从事一些其他生产性领域项目。对于未来，要取得长足发展，年轻的亚投行需更加注重创新和风险防控。陈凤英称，随着国际经贸格局深入调整，亚太地区经济发展环境在变，基础设施建设的含义可能也会变。因此，亚投行需不断创新，更好适应区域新的经济发展需求。此外，多边机构最关键的问题在于管理，亚投行今后应继续坚持正确的管理思路和做法，并根据形势发展及时调整。徐秀军则认为，随着今后业务规模逐渐扩大，亚投行需要在风险防控上加大力度。金立群说，对于亚投行来说，项目的数量重要，但质量更加重要。没有数量对发展的影响不够，但如果搞了很多项目都是赔钱的、失败的，同样没有任何意义。在财务可持续性上，亚投行有风险管控部门来严格计算把关，这一系列措施都建立在公司治理框架基础之上。在管理上，亚投行也从开始就设定了“精干”的目标，并进行制度和架构创新，从源头上防止“大机构病”。特别是采取了按业务条线设立部门的方式，从而使每个专业人员都得到充分工作机会，不会出现“一部分人非常忙，一部分人非常闲”的情况。与此同时，亚投行并未在各个成员国设立庞大的代表处，而是在银行内部成立一个国家规划部门，对主要国家的借款进行充分规划和准备，今后还会在项目所在国适当雇佣一些咨询专家进行协调。当然，亚投行依然是一家新创办的机构。金立群说，我们将继续保持谦虚谨慎的态度，每走一步路都要踩在实地，站稳了再往前走，不能急躁、不能浮夸，更不能有妄自尊大的心态。一定要记得，亚投行只是众多国际多边机构中的一员，它还在成长之中。（本文作者：俞岚 李晓喻 王恩博）'}, {'title': '陕西省委:坚决拥护党中央对赵正永调查的决定', 'newssource': '新浪新闻综合', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 14, 11), 'article': '原标题：省委常委会会议强调 坚决拥护党中央对赵正永涉嫌严重违纪违法进行纪律审查和监察调查的决定来源：秦风网1月16日，省委召开常委会会议，通报中央对赵正永涉嫌严重违纪违法进行纪律审查和监察调查的决定。省委书记胡和平主持会议。会议指出，中央决定对赵正永涉嫌严重违纪违法进行纪律审查和监察调查，充分体现了以习近平同志为核心的党中央坚定不移推进全面从严治党的鲜明态度和反腐败无禁区、全覆盖、零容忍的一贯立场，充分彰显了我们党自我净化、自我完善、自我革新、自我提高的强大能力。陕西省委坚决拥护中央决定，坚决维护习近平总书记核心地位，坚决维护党中央权威和集中统一领导，始终在思想上政治上行动上同党中央保持高度一致。会议强调，全省各级党组织和广大党员干部要旗帜鲜明讲政治，深刻认识赵正永的两面性、欺骗性，深刻汲取教训，坚决与其划清界限，彻底清除其恶劣影响。要牢固树立“四个意识”，发扬斗争精神，在重大原则问题上立场坚定，把“两个维护”真正铭记在头脑里、全面落实到行动上、处处体现在工作中。要坚定“四个自信”，学懂弄通做实习近平新时代中国特色社会主义思想，持之以恒改造主观世界，坚守共产党人政治灵魂。会议强调，要始终坚持挺纪在前，认真贯彻党章和新修订的纪律处分条例，严格执行新形势下党内政治生活若干准则，严格遵守廉洁从政各项规定，自觉防范“围猎”行为，永葆共产党人政治本色。要弘扬党的优良作风，严格贯彻执行中央八项规定实施细则精神和省委实施办法，坚决破除形式主义、官僚主义，低调务实不张扬、埋头苦干，真正把组织赋予的职责履行好。会议要求，要认真落实十九届中央纪委三次全会精神，深刻认识反腐败斗争依然复杂严峻的形势，牢记全面从严治党永远在路上，夯实管党治党政治责任，完善监督体系，严查各类违纪违法问题，严肃惩治群众身边不正之风和腐败问题，以赵正永、魏民洲、冯新柱、钱引安等反面典型为镜鉴，巩固发展反腐败斗争压倒性胜利。要紧盯追赶超越目标，认真践行“五个扎实”要求，加快推进“五新”战略任务，扎扎实实办好陕西的事，让习近平总书记和党中央放心、让全省人民满意。'}, {'title': '台军用“充气战车”反大陆侦查 网友：脑子没长进', 'newssource': '海外网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 13, 54), 'article': '原标题：台军用“充气战车”反大陆侦查 岛内大笑：什么玩意海外网1月16日电 近日，台军曝光了他们将用来反大陆侦查的“充气战车”。看完之后，岛内网友都笑了。据台湾“联合新闻网”16日报道，台“中山科学研究院”研制了一款“充气式仿真战车”，他们声称，希望将这一战车用来“反制”大陆卫星侦查。近年，这一充气战车会积极在各部队巡回推广。昨日（15日），台军媒体首度披露这一“充气战车”的近距离画面。从图片上看，这一“充气仿真战车”整体呈军绿色，约莫两人高，造型有点像坦克。但这一充气战车似乎也不太结实，照片中台军军官手在上面一放，“充气战车”就凹下了一块。台军“充气战车”的画面一曝光，随即被岛内网友玩坏。有网友一脸无奈地表示“这什么东西啊”“我笑了，现代的兵器与科技”还有网友调侃“谁会怕你这充气战车？”“二战的把戏拿来现在用？自己脑子没长进以为别人也一样？”有岛内网友戏称“可以弄些仿真士兵、仿真战机、战舰、导弹等大家都眼花了？！呵呵！”更有台湾民众借此讽刺蔡英文“弄几个充气蔡英文办公室，到处放”“伪‘统帅’乘‘伪战车’，很搭！”除了这次的“充气战车”，近年来台军时不时都会冒出一些匪夷所思的画面。台军计划本月在台中进行“联合反登陆”演习。9日，有台媒报道称，台湾网友日前去阵地观察，发现台军为轻兵器射击阵地堆置清一色的白色沙包，并批评“过家家”“童子军扎营”。此前还有台媒报道称，台军在演习中出现了“放着步枪不用，坚持格斗”的画面。台专家不禁惊呼：这是什么烂戏？我在看武打片吗？台军的所谓作战能力着实堪忧，演习出现的事故不计其数。2018年6月， 台军“汉光演习”的第一天就发生事故，一架F-16坠毁，机上飞行员殉职。随后，“汉光九鹏”导弹射击又被曝出现失误，不明物体在蔡英文面前坠落并冒出浓浓白烟。针对台军的各种动作，大陆方面已经进行过反复表态。国台办发言人安峰山曾表示，我们一直强调，两岸关系和平发展才是维护台海和平稳定的根本保障。这是大家都很清楚的道理。国防部新闻发言人吴谦大校也在2018年12月国防部例行记者会上强调，以武拒统只有死路一条。（海外网 罗伊晴）'}, {'title': '崛起中国与“撤退中的”美国在这点上对照鲜明', 'newssource': '参考消息', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 13, 37), 'article': '原标题：崛起中国与“撤退中的”美国在这点上对照鲜明——参考消息网1月16日报道\xa0美国《福布斯》双周刊网站1月14日发表世界法律大会高级合伙人、TGE市场与咨询公司创始人之一丹尼尔·阿拉亚的文章《中国的宏伟战略》称，技术改变了全球经济。过去20年中，随着新兴经济体获得竞争优势，技术带来了权力性质的关键转变。利用这种“地缘技术”转变的，是中国的宏伟战略。中国前所未有的经济扩张现在对世界经济产生引力，将新兴市场聚集在其轨道上。在其商业影响力的支持下和扩大供应链帝国之际，中国的全球雄心日益建立在港口、公路和管道的基础上。此外，中国的宏伟战略还建立在寻求中国先进技术的各个新市场的基础上。文章称，西方领导人固守威斯特伐利亚体系所确立的民族国家这一过时理念，中国却正将世界重新想象成一个由供应链和贸易干线组成的复杂网络。中国的招牌性计划“一带一路”倡议，横跨亚洲、中东、非洲和欧洲，是有史以来规模最大的基础设施项目。“一带一路”倡议为中国商品建立了一个全面的贸易网络，为中国围绕先进技术进行的长期战略性转变提供了一个平台。其中包括电动汽车、电信、机器人、人工智能、半导体、清洁能源技术、先进电力设备、铁路基础设施和海洋工程。文章认为，在商业收购和对国有企业投资的基础上，中国的科技产业政策试图将中国定位为高科技全球超级大国。中国在科技领域投入数十亿美元资金，在基因组学、量子计算、机器人和先进材料等方面进行研发。中国的技术领头羊华为和中兴正在成为全球巨头。文章称，不管怎样，中国正在成为在非洲和拉美的主要力量，提供亟须的基础设施和连通性。中国的亚洲基础设施投资银行（亚投行）现在与世界银行展开竞争，其“一带一路”倡议确保中国在各新兴经济体中的长期领导地位。文章指出，与中国的崛起相对照的，是一个撤退中的美国。被特朗普总统的民粹主义和保护主义贸易政策有效削弱的，恰恰是曾经为美国领导地位正名的自由秩序。从美国总统理查德·尼克松的北京之行开始，各个先进经济体便通过直接投资和提供指导意见为中国崛起提供支持。但现在，似乎注定要发挥领导作用的却是中国。在西方，焦虑感与日俱增。无论如何，中国的影响力在增长。在特朗普政府开始努力遏制中国崛起的同时，“一带一路”倡议仍在向前推进，为一个欧亚超级大陆提供保障。中国雄厚的资金和专业技能为亚洲、中东、非洲和欧洲的一体化提供保障。就连欧盟也明白中国宏伟战略的经济价值：欧洲国家是最早加入亚投行的国家之一，尽管美国不出所料提出了抗议。文章称，在经历了一个多世纪的贫困和孤立后，中国现在正向全世界的发展中国家提供巨额投资。假设中国塑造新兴市场的努力取得成功，这将是一个高招。另一个现实是，中国的基础设施确保以知识为基础的商品和服务业能获得重大机遇。而这正是中国所指望的。除了基础设施，中国商品在亚洲、非洲和拉丁美洲的未来是医疗技术、机器人、工业园、制造技术、自动驾驶汽车和清洁能源。文章称，西方分析人士常常忽视中国正在培育的更深层次的长期市场，这是一个错误。正如世界经济论坛指出，中国对新兴经济体的投资正在为金融服务、保险、法律服务、教育、人力资源、风险资本和娱乐等领域内的新市场提供一个广阔平台。投资者最好予以注意。'}, {'title': '河南去年GDP突破4.8万亿 省会郑州占比超两成', 'newssource': '澎湃新闻', 'comments': 846, 'editer': '闫宏亮 ', 'dt': datetime.datetime(2019, 1, 16, 13, 22), 'article': '原标题：河南去年GDP突破4.8万亿，省会郑州占比超两成1月16日，河南省第十三届人民代表大会第二次会议在郑州召开，省长陈润儿作政府工作报告。陈润儿透露，2018年，全省经济平稳运行，稳中向好，预计生产总值突破4.8万亿元，比上年增长7.5%左右。另据大河客户端消息，1月12日召开的郑州市委全会暨市委经济工作会传出喜讯，2018年，郑州市经济总量首破万亿大关，成功晋级“万亿俱乐部”。这是郑州发展史上的重要里程牌，标志着郑州经济社会发展站上新起点、开启新征程。根据以上数据推算，作为河南省省会的郑州，2018年经济总量在河南全省经济总量中的占比已经超过两成。'}, {'title': '台媒:民进党新任秘书长罗文嘉1月16日正式上任', 'newssource': '中国新闻网', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 13, 6), 'article': '原标题：台媒：民进党新任秘书长罗文嘉1月16日正式上任中新网1月16日电 据台湾“中央社”报道，台湾民进党主席卓荣泰上任后，陆续布局党务人事，新任秘书长罗文嘉1月16日将正式上任，副秘书长郭昆文已到职，组织部主任则由前台北市议员李庆锋出任，其他党务人事调整将等1月27日“立委”补选后再决定。据报道，为了预先作准备，罗文嘉1月15日先到民进党党部了解1月16日议程。1月16日正式上任后，上午他出席一场青年实习计划结业式活动，下午列席民进党中常会。卓荣泰1月9日就任党主席后，迅速补实党务主管空缺，包括罗文嘉、新任副秘书长郭昆文、新任组织部主任李庆锋，其他的党务人事调整，将等到1月27日“立委”补选后再决定。卓荣泰勤跑台北市、台中市、彰化县补选“立委”，1月16日民进党中常会安排台北市党部主委陈正德、台中市党部主委何明杰向中常委报告“立法委员”补选选情。'}, {'title': '贵州六盘水市发生3.2级地震 震源深度10千米', 'newssource': '中国地震局网站', 'comments': 846, 'editer': '赵明 ', 'dt': datetime.datetime(2019, 1, 16, 12, 50), 'article': '#地震快讯#中国地震台网正式测定：01月16日12时43分在贵州六盘水市六枝特区（北纬26.06度，东经105.26度）发生3.2级地震，震源深度10千米。（ @中国地震台网 ）'}, {'title': '四川旺苍县委书记刘亚洲被查', 'newssource': '中国新闻网', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 12, 49), 'article': '原标题：四川省旺苍县委书记刘亚洲涉嫌严重违纪违法接受审查调查中新网成都1月16日电 （记者 张浪）四川省纪委监委16日消息：四川省广元市旺苍县委书记刘亚洲涉嫌严重违纪违法，目前正接受纪律审查和监察调查。四川省纪委监委公开的刘亚洲资料显示：刘亚洲，男，汉族，1964年9月生，湖北荆门人，中央党校在职研究生学历，1981年12月参加工作。1981年12月至1988年11月，刘亚洲在青川县物资局工作；1988年11月至1995年3月，在青川县移民办工作，历任安置科科长、规划建设科科长；1995年3月至1995年10月，任青川县乔庄镇党委副书记；1995年10月至1996年10月，任青川县黄坪乡党委书记；1996年10月至1997年12月，任青川县乔庄镇党委书记；1997年12月至2002年4月，任青川县委常委、宣传部部长；2002年4月至2002年12月，任广元市委宣传部副部长；2002年12月至2007年7月，任广元市元坝区委副书记；2007年7月至2008年12月，任广元市利州区委副书记；2008年12月至2011年9月，历任广元市招商引资局党组副书记、副局长（主持工作），党组书记、局长。2011年开始，刘亚洲开始在旺苍县任职。2011年9月至2011年11月，刘亚洲任旺苍县委副书记、副县长、代县长；2011年11月至2016年2月，任旺苍县委副书记、县长；2016年2月至2016年5月，任旺苍县委书记、县长；2016年5月至今，任旺苍县委书记。（完）'}, {'title': '贵州六盘水发生3.1级左右地震', 'newssource': '中国地震局网站', 'comments': 846, 'editer': '赵明 ', 'dt': datetime.datetime(2019, 1, 16, 12, 46), 'article': '#地震快讯#中国地震台网自动测定：01月16日12时43分在贵州六盘水市六枝特区附近（北纬26.06度，东经105.30度）发生3.1级左右地震，最终结果以正式速报为准。（ @中国地震台网 ）'}, {'title': '外媒:中国对美顺差创纪录 世界忧关税战滞后效应', 'newssource': '参考消息', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 12, 33), 'article': '原标题：外媒：中国对美顺差再创纪录 世界担忧关税战滞后效应参考消息网1月16日报道 英国广播公司网站1月14日发表题为《中国进出口数据大涨 贸易战阴影为何未显现》的文章称，14日，中国海关总署披露了2018年的外贸数据。中国外贸进出口总值超过30万亿元人民币，同比增长9.7%。虽然中美在2018年贸易摩擦不断，但中国对美贸易出口却同比大幅增长11.3%。中国对美国贸易顺差增至3233亿美元，为2006年以来最高。分析人士称，这些反常识的现象，是由于“抢出口”效应和政策的延迟。同时，12月单月表现疲弱，表现出贸易战的影响逐渐显现，为未来蒙上阴影。文章称，根据中国官方的数据，按美元计价，中国2018年外贸进出口总值为4.62万亿美元，增长12.6%；中国对美国出口同样增长强劲，同比增长11.3%，达到4784亿美元。“刚公布的中国外贸数据需要放在大背景下理解。”凯源资本董事总经理布罗克·西尔弗斯分析说，中国对美出口保持在高位主要有两个原因：一是美国经济强势增长，二是中国出口商急于在美贸易限制措施生效前发货。此外，香港科技大学经济系教授朴之水表示，对中国商品的强劲需求也反映出其他国家难以在商品的价格和质量方面与中国竞争，所以少量加征关税不会从实质上改变全球对中国出口商品的需求。文章称，特朗普政府发起贸易战的原因之一是想降低中国对美的贸易顺差，但从数据上看，似乎事与愿违。文章指出，虽然中国对全球的贸易顺差下降了16.2%，到3517.6亿美元，为2013年来最低。但中国对美国贸易顺差却不减反增，达到3233亿美元，为2006年以来最高。朴之水分析称，这主要是因为中国从美国的进口几乎没有增长，相比之下，中国从全球其他国家的进口却增长强劲。更深层次地来说，中国对美国贸易顺差的增长，反映的还是中美贸易战之前的一些趋势。文章称，虽然中国全年外贸表现较好，但12月单月表现疲弱。路透社援引多位分析师称，去年12月进出口数据“双降”，显示出全球经济和中国经济放缓已初步得到验证，展望2019年一季度，外贸走势不容乐观。另据美联社1月14日文章称，2018年中国对美贸易顺差增至创纪录的3233亿美元，但随着特朗普总统提高关税的政策的滞后影响开始波及需求，中国12月的出口额出现下滑。海关14日公布的数据显示，尽管特朗普征收了惩罚性关税，但2018年中国对美出口额仍增长了11.3%，达到4784亿美元。美国商品的进口额仅较2017年增长了0.7%，反映了北京征收报复性关税并鼓励进口商从非美国供应商购买更多商品的影响。文章称，中国12月对美出口额同比下降了3.5%，至403亿美元。前几个月，中国出口商为了完成订单而赶工，对美国市场的销售额一直保持较快增速。但是预测机构表示，一旦特朗普惩罚性措施的影响充分显现出来，来自美国的订单就会骤降。'}, {'title': '陈寅第二次任上海副市长 2017年出任市政法委书记', 'newssource': '新浪新闻综合', 'comments': 846, 'editer': '闫宏亮 ', 'dt': datetime.datetime(2019, 1, 16, 12, 24), 'article': '原标题：陈寅第二次担任上海副市长来源：长安街知事今天举行的市十五届人大常委会第九次会议审议并表决通过了有关人事任免案，决定任命陈寅为上海市副市长。公开简历显示，陈寅1962年9月出生，江苏南京人。曾任上海市公用事业局局长助理，市水务局副局长，市发展改革委副主任，徐汇区区长，杨浦区委书记，市政府副秘书长、中国（上海）自由贸易试验区管委会党组书记、常务副主任，市委副秘书长等职。2016年5月，陈寅出任上海副市长，分管城乡建设和管理、住房、国土资源、水务、交通港口、绿化市容、城乡规划、环保、民防、抗震、外事、涉港澳事务、食品和药品监督、工商、质监、信访、社会稳定等工作。2017年7月，陈寅出任上海市委常委、政法委书记。本次任命，是陈寅第二次担任上海副市长职务。陈寅简历陈寅，男，1962年9月生，汉族，江苏南京人，中共党员，1984年7月参加工作，大学，工商管理硕士，高级工程师。1980.09——1984.08，同济大学建筑工程分校工民建专业学习，获工学学士学位；1984.08——1985.02，上海市自来水公司技术员；1985.02——1986.02，黄浦江上游引水工程公司浦东指挥部过江管组工作人员；1986.02——1989.07，黄浦江上游引水工程公司浦东指挥部过江管组组长、团支部书记；1989.07——1991.02，黄浦江上游引水工程公司工程科副科长；1991.02——1992.11，黄浦江上游引水工程公司经理助理；1992.11——1994.12，黄浦江上游引水工程公司副经理；1994.12——1998.02，上海市自来水公司副总经理（1994.08—1995.10，赴西藏参加市政府援藏项目──日喀则水厂工程建设，任项目负责人；1996.05—1997.04，参加市委组织部高级经济管理人员培训班赴美国培训学习）；1998.02——2000.04，上海市公用事业管理局局长助理；2000.04——2003.08，上海市水务局副局长（其间：2001.09—2003.07，华东师范大学区域经济研究生课程班暨澳门科技大学工商管理硕士研究生班学习）；2003.08——2006.09，上海市发展和改革委员会副主任（正局级）；2006.09——2006.10，上海市徐汇区委副书记；2006.10——2007.02，上海市徐汇区委副书记、代区长；2007.02——2010.04，上海市徐汇区委副书记、区长；2010.04——2014.12，上海市杨浦区委书记；2014.12——2015.08，上海市政府副秘书长、上海自贸区管委会党组书记、常务副主任（至2015.04）；2015.08——2016.05，上海市委副秘书长；2016.05——2017.05，上海市人民政府副市长、党组成员；2017.05——2017.07，上海市委常委、政法委书记，市人民政府副市长、党组成员；2017.07——2019.01，上海市委常委、政法委书记。十一届上海市委委员。'}, {'title': '农业农村部:春节猪肉供应有保证 存栏量逼预警线', 'newssource': '新京报', 'comments': 846, 'editer': '闫宏亮 ', 'dt': datetime.datetime(2019, 1, 16, 12, 18), 'article': '原标题：农业农村部：春节猪肉供应有保证 但存栏量逼近预警线新京报讯（记者 田杰雄）1月16日上午，农业农村部市场与信息化司司长唐珂表示，2018年非洲猪瘟对市场影响总体有限，春节前猪肉供应有保证，肉价稳中有降。但根据监测，由于存栏量逼近预警线，今年下半年肉价存在上涨趋势，建议养殖户注意扩大生产。在农业农村部就2018年主要农产品市场运行情况举行的发布会上，唐珂表示，据监测去年全年猪肉批发市场均价为每公斤18.7元，同比跌12.1%。8月份非洲猪瘟发生后，受活猪跨省禁运政策影响，区域间供需出现不平衡现象，产区跌、销区涨；随着各地改“调猪”为“调肉”，控制了疫情的同时，流通渠道逐渐通畅，产销区猪价分化趋缓。生猪出栏量、屠宰量依然较为充足，元旦前后猪价还出现了下跌，预计短期内不会大幅上涨。但从长期看，唐珂指出今年下半年猪肉供给存在一定风险，就生猪产业格局来看，散户影响较大，在面对非洲猪瘟这一“头号杀手”时，散户务必做好防控，而大型养殖场防护措施严密，受到的冲击相对较小，产能保护有信心。农业农村部同时建议，根据监测看，目前存栏量正在逼近预警线，下半年猪肉价格上涨可能性比较大，养殖场可适时补栏，相信会有较好的收益。唐珂表示，从国际情况看，非洲猪瘟曾经在几十个国家暴发，各国最少也要六七年才能根除，因此这是一次持久战，但我们也有信心打好非洲猪瘟疫情防控战。'}, {'title': '农业农村部回应菜价过山车：市场对接效率低', 'newssource': '新京报', 'comments': 846, 'editer': '闫宏亮 ', 'dt': datetime.datetime(2019, 1, 16, 12, 18), 'article': '原标题：农业农村部回应去年菜价“过山车” ：市场对接效率低新京报讯（记者 杨亦静） 在今天上午举办的农业农村部例行新闻发布会上，就2018年全年菜价发生的剧烈波动，农业农村部市场与信息化司司长唐珂表示，蔬菜价格波动大暴露了生产和市场对接效率低的老问题。他同时表示，春节前“菜篮子”产品供应总体有保障，部分品种价格可能波动上行。唐珂说， 2018年蔬菜价格是近年来波动比较大的一年，其中的一个原因是受到天气影响。去年入夏后，全国多地持续高温多雨，对蔬菜生长、采摘、运输带来较大影响，5月份蔬菜批发均价每公斤3.54元，是10年来同期较高的价位；8月份山东潍坊等蔬菜主产区又遭受了台风灾害、水灾，三季度菜价高位上涨，但秋后菜价又大幅下跌，11月份蔬菜批发均价每公斤3.52元，环比跌13.5%，比近10年均价低6个百分点以上唐珂表示，蔬菜价格波动大暴露了生产和市场对接效率低的老问题，说明有效对接产销、破解“菜贵伤民、菜贱伤农”的问题，是一项艰巨的长期任务。他说，目前农业农村部正在与有关部门一起，围绕小农户进入大市场的需要，从产地市场建设、产销信息服务、对接平台搭建、产品品牌提升等多方面入手，争取尽快建立健全从田头到餐桌的高效供给体系。'}, {'title': '陕西省委原书记赵正永最后一次露脸 参访当地寺庙', 'newssource': '观察者网', 'comments': 846, 'editer': '闫宏亮 ', 'dt': datetime.datetime(2019, 1, 16, 12, 13), 'article': '原标题：陕西省委原书记赵正永最后一次露脸 参访当地寺庙1月9号晚间，央视播出专题节目《一抓到底正风纪》，披露了秦岭违建整治的诸多细节。蹊跷的是，“时任省委书记”赵正永未出镜。节目播出6天后，陕西省委原书记赵正永涉嫌严重违纪违法，目前正接受中央纪委国家监委纪律审查和监察调查。据媒体指出，赵正永最后一次露脸，却是去年7月初参访长安香积寺，而在7月底，秦岭违建整治大幕揭开。2018年7月3日，长安香积寺微信公众号（caxjss）发布了一篇名为《第十二届全国人民代表大会内务司法委员会副主任委员、原陕西省委书记赵正永等一行参访长安香积寺报道》的文章，并配有大量图文。不过，文章发出后不久，很快就被删除。根据文章显示，赵正永一行人于当天（3日）上午参访了长安香积寺，随寺内访客接待，赵正永首先参观了该寺善导书院，随后又前往崇灵塔、大雄宝殿和净土文化展示厅参观后结束参访活动。据了解，2001年6月，赵正永调任陕西省委常委，自此在陕西工作15年之久。其中2010年6月至2016年3月，历任代省长、省长、省委书记。到陕西后，他先后任省委政法委书记，副省长、党组副书记。2010年5月升任陕西省委副书记，次月任代省长，2011年1月任省长，由此晋升正省部级。1年11个月后，于2012年12月任省委书记，成为主政一方的“一把手”，至2016年3月卸任。次月，他转任第十二届全国人大内务司法委员会副主任委员，至2018年3月退休。就在他退休4个月后，2018年7月，由中央牵头整治秦岭北麓违规建别墅问题的大幕，正式揭开。而香积寺是“佛教八宗”之一“净土宗”祖庭，是唐代著名的樊川八大寺之一，同时也是中国和日本净土宗共同的祖庭。当地人称，“去过香积寺，平安又无事”。因此就有网友猜测，赵正永在此时前往香积寺，恐为寻得内心安宁，缓解焦虑。赵正永简历：赵正永，男，汉族，1951年3月生，安徽马鞍山人，1968年11月参加工作，1973年11月加入中国共产党，中央党校研究生学历。曾任第十二届全国人民代表大会内务司法委员会副主任委员。1968年11月至1970年11月，安徽省宣城地区水阳乡双丰村上山下乡知青；1970年11月至1974年10月，安徽省马钢公司修理部机动车间工人，秘书科秘书；1974年10月至1977年08月，在中南矿冶学院材料系金属物理专业学习；1977年08月至1979年06月，安徽省马钢公司钢铁研究所物理室技术干部，复查办办事员；1979年06月至1982年08月，任安徽省马钢公司钢铁研究所团委副书记，马钢公司团委副书记、书记；1982年08月至1983年05月，任共青团安徽省马鞍山市委书记、党组书记；1983年05月至1985年09月，任安徽省马鞍山市委常委、团市委书记（其间：1983年09月至1985年07月，在中央党校第一期中青年干部培训班学习）；1985年09月至1988年03月，任安徽省马鞍山市委常委、秘书长；1988年03月至1992年05月，任安徽省马鞍山市委副书记；1992年05月至1993年04月，任安徽省黄山市委副书记；1993年04月至1998年04月，任安徽省黄山市委书记，黄山军分区第一书记、第一政委；1998年04月至2000年05月，任安徽省公安厅厅长、党委书记，武警安徽省总队第一书记、第一政委；2000年05月至2001年06月，任安徽省委政法委书记，省公安厅厅长、党委书记，武警安徽省总队第一书记、第一政委；2001年06月至2005年01月，任陕西省委常委、政法委书记（其间：2002年09月至2003年01月，在中央党校省部级干部进修班学习）；2005年01月至2005年08月，任陕西省委常委，省人民政府副省长、党组副书记，省委政法委书记；2005年08月至2010年05月，任陕西省委常委，省人民政府副省长、党组副书记，预备役141师第一政委（其间：2006年11月至2007年01月，在中央党校省部级干部进修班学习；2007年09月至2007年12月，在美国哈佛大学研修班学习）；2010年05月至2010年06月，任陕西省委副书记，省人民政府副省长、党组副书记，预备役141师第一政委；2010年06月至2011年01月，任陕西省委副书记，省人民政府副省长、代省长、党组书记，预备役141师第一政委；2011年01月至2012年12月，任陕西省委副书记，省人民政府省长、党组书记；2012年12月至2013年01月，任陕西省委书记，陕西省军区党委第一书记；2013年01月至2016年03月，任陕西省委书记、省人大常委会主任，陕西省军区党委第一书记；2016年03月至2016年04月，任陕西省人大常委会主任；2016年04月至2018年03月，任第十二届全国人民代表大会内务司法委员会副主任委员。2019年1月15日，陕西省委原书记赵正永涉嫌严重违纪违法，接受中央纪委国家监委纪律审查和监察调查。'}, {'title': '加拿大外长称已经请求中国饶加籍毒贩一命', 'newssource': '观察者网', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 12, 12), 'article': '原标题：加拿大外长称已经请求中国饶加籍毒贩一命[文/观察者网 王慧]“我们（特鲁多政府）已经和中国驻加拿大大使谈过，请求中国仁慈”，饶谢伦伯格一命，加拿大外长弗里兰15日告诉记者。观察者网注意到，弗里兰在讲话中完全没有提及谢伦伯格的“毒贩”身份，而是用“加拿大人”代替。1月14日，大连中级人民法院对加拿大籍被告人罗伯特·谢伦伯格以走私毒品罪判处死刑。谢伦伯格被控企图将222千克冰毒运往澳大利亚，且为该起贩毒案的主犯。中国刑法明确规定，涉嫌毒品犯罪行为的，符合相关情况可以被判处死刑。据加拿大广播新闻网（CBC）当地时间15日报道，弗里兰称，“加拿大对待死刑的立场是一贯的、长期的。”“加拿大没有死刑。我们认为，这是不人道且不恰当的。加拿大人无论在哪里面对死刑判决，我们都会发声反对。”当被问及加方是否会升级沟通级别，由加拿大总理特鲁多与中国最高领导人沟通时，弗里兰称，目前两国官员见正在进行大量对话。“我亲自和中国大使谈了两次，”弗里兰称，“他和这里有很多联系。我们和中国政府之间保持着多级别的联系，持续对话非常重要。”事实上，加拿大全球事务部周二向CBC证实，他们2015年就曾给与因走私毒品而被处决的加拿大人领事协助，甚至时任总理哈珀亲自请求也没成功。据加拿大《多伦多星报》早前报道，加拿大前驻华大使圣雅克（Guy Saint-Jacques）称，两名华裔加拿大人在他担任驻华大使期间遭到审判和处决。圣雅克在接受CBC“权力与政治”（Power & Politics）节目采访时称，加拿大只给其中一人提供了领事协助，因为另一名加拿大人是持中国旅行证件入境的。圣雅克称，当时加拿大前总理哈珀（Stephen Harper）、前总督约翰斯顿（David Johnston）都曾亲自参与其中请求中国宽大处理，但都没成功。圣雅克认为，加拿大政府对谢伦伯格案宽大处理的请求不会改变中国政府的态度。尽管谢伦伯格案让中加关系日趋紧张，加拿大外长弗里兰还是强调，“需要记住重要的一点——中加关系源远流长”，她将目前的情况称为中加关系中“复杂而艰难的一段时光”。中加关系“非常深入，涉及到很多方面。我认为，中国和加拿大都致力于推动这一关系向前发展，”弗里兰说，加拿大政府将继续为谢伦伯格辩护。大连市中级人民法院发布的相关消息显示，谢伦伯格参与有组织的国际贩毒活动，伙同他人走私冰毒222.035千克，行为构成走私毒品罪。昨天，加拿大《全国邮报》、加拿大广播新闻网（CBC）等主流媒体报道了他在加拿大的贩毒记录。CBC报道称，谢伦伯格的犯罪记录更早可以追溯到2003年2月，当时他因为非法交易而被判处6个月的监禁。2012年4月，谢伦伯格又因贩运可卡因被加拿大不列颠哥伦比亚省最高法院判处了有期徒刑16个月。当时宣判他的法官尼尔⋅布朗（Neill Brown）还曾在法庭上“劝他善良”。“你生活在全世界上最好的一个国家，这样一个国家值得你表现得更好”，布朗在宣判谢伦伯格时这样说到。他还特别叮嘱谢伦伯格“永远不要低估这种犯罪的严重性”。这位法官的话谢伦伯格并没有听进去，日前因走私200多千克病毒进入中国境内被判死刑。谢伦伯格不服，提出上诉。14日，加拿大总理特鲁多公开指责中国法院判处谢伦伯格死刑是一项“武断行为”，要求中国释放毒贩。加拿大外交部更新了对其公民前往中国旅行的建议，警示级别维持在第二级“提高警惕”（Exercise a high degree of caution）。加外交部网站显示，加拿大警告公民前往中国要小心“地方法律被任意执行的风险”，还在“法律和文化”方面提醒，中国有“死刑，以及对毒品犯罪的惩罚”。在15日的外交部例行记者会上，针对加拿大的此次旅游警示，发言人华春莹表示，加拿大政府是应该向本国公民发布提醒，但不是提醒到中国可能面临危险，而是提醒加公民千万不要到中国从事走私贩毒这样的严重罪行，这一定会有严重后果。华春莹说，“我觉得加方说发布安全提醒，这个有点贼喊捉贼。实际上，以所谓法律为由任意拘押外国公民的恰恰是加拿大，而不是中国。”她表示，每一个被拘的加拿大公民是由于犯了什么事在中国被有关部门采取措施，中方都作出了清楚的说明。针对加拿大总理特鲁多称中国随意作出死刑判决，华春莹称，此话差矣。“我不知道加方有关人士讲这个话之前，有没有认真地读一读辽宁省大连市中级人民法院就此案发布的相关信息，有没有认真地学一学中国的有关法律。”华春莹说，大连市中级人民法院发布的相关信息十分具体和详尽，被告人谢伦伯格参与有组织的国际贩毒活动，伙同他人走私冰毒222.035千克，行为构成走私毒品罪。公诉机关指控的犯罪事实清楚，证据确实充分。毒品犯罪是世界公认的严重罪行，社会危害极大，各国都予以严厉打击。中国同样对毒品犯罪严惩不贷。法律面前一律平等，这就是真正的法治精神。加方有关人士的言论缺乏最起码的法治精神，我们对此表示强烈不满，我们敦促加方尊重法治，尊重中国的司法主权，纠正错误，停止发表不负责任的言论。1月15日，外交部提醒中国公民，近期谨慎前往加拿大。微信公号“领事直通车”称，近期，加拿大发生中国公民被加执法部门以第三国要求为由任意拘押事件。外交部和中国驻加拿大使领馆提醒中国公民结合自身情况，充分评估前往加拿大旅行的风险，近期谨慎前往加拿大。如遇紧急情况，请及时联系中国驻加使领馆寻求协助。'}, {'title': '陈寅任上海市副市长 翁铁慧被免去副市长职务', 'newssource': '上观新闻', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 11, 55), 'article': '原标题：[人事]陈寅任上海市副市长今天上午，上海市十五届人大常委会第九次会议表决通过了人事任免案，决定任命陈寅为上海市副市长，免去翁铁慧的上海市副市长职务。陈寅，男，1962年9月生，汉族，江苏南京人，中共党员，1984年7月参加工作，大学，工商管理硕士，高级工程师。现任市委常委、副市长、市政府党组副书记，市委政法委书记。曾任市公用事业局局长助理，市水务局副局长，市发展改革委副主任，徐汇区委副书记、副区长、代区长、区长，杨浦区委书记，市政府副秘书长、中国（上海）自由贸易试验区管委会党组书记、常务副主任，市委副秘书长，副市长，市委常委、政法委书记等职。陈寅简历（来源：中国经济网）陈寅，男，汉族，1962年9月生，江苏江宁人，1986年5月加入中国共产党，1984年8月参加工作，同济大学建筑工程分校工民建专业毕业，全日制大学学历，工学学士，工商管理硕士，高级工程师。1980.09——1984.08，同济大学建筑工程分校工民建专业学习，获工学学士学位；1984.08——1985.02，上海市自来水公司技术员；1985.02——1986.02，黄浦江上游引水工程公司浦东指挥部过江管组工作人员；1986.02——1989.07，黄浦江上游引水工程公司浦东指挥部过江管组组长、团支部书记；1989.07——1991.02，黄浦江上游引水工程公司工程科副科长；1991.02——1992.11，黄浦江上游引水工程公司经理助理；1992.11——1994.12，黄浦江上游引水工程公司副经理；1994.12——1998.02，上海市自来水公司副总经理（1994.08—1995.10赴西藏参加市政府援藏项目──日喀则水厂工程建设，任项目负责人；1996.05—1997.04参加市委组织部高级经济管理人员培训班赴美国培训学习）；1998.02——2000.04，上海市公用事业管理局局长助理；2000.04——2003.08，上海市水务局副局长（其间：2001.09—2003.07华东师范大学区域经济研究生课程班暨澳门科技大学工商管理硕士研究生班学习）；2003.08——2006.09，上海市发展和改革委员会副主任（正局级）；2006.09——2006.10，中共上海市徐汇区委副书记；2006.10——2007.02，中共上海市徐汇区委副书记、代区长；2007.02——2010.04，中共上海市徐汇区委副书记、区长；2010.04——2014.12，中共上海市杨浦区委书记；2014.12——2015.08，上海市政府副秘书长（至2015.08）、上海自贸区管委会党组书记、常务副主任（至2015.04）；2015.08——2016.05，上海市委副秘书长；2016.05——2017.05，上海市副市长；2017.05——2017.07，上海市委常委、政法委书记，副市长；2017.07 上海市委常委、政法委书记。翁铁慧简历翁铁慧，女，汉族，1964年4月生，复旦大学毕业，研究生学历，经济学硕士，研究员。1981年进入复旦大学世界经济系攻读本科学位，后在复旦世界经济研究所攻读硕士学位。毕业后留校，先后担任复旦学工部副部长、部长，复旦大学副校长、党委副书记等职。曾任上海市科教党委副书记、上海市科教党委书记、上海市人民政府副秘书长等职。2003年调任上海市教育党委副书记。2008年2月任上海市人民政府副秘书长；2013年2月，任上海市人民政府副市长。'}, {'title': '今年玉米价格将大幅上涨？ 农业农村部：稳中有升', 'newssource': '中国新闻网', 'comments': 846, 'editer': '赵明 ', 'dt': datetime.datetime(2019, 1, 16, 11, 50), 'article': '原标题：今年玉米价格将大幅上涨？农业农村部：稳中有升中新网1月16日电 针对玉米价格行情，农业农村部市场与信息化司司长唐珂今日表示，虽然临储玉米消化偏快，但当前玉米库存依然处于较高水平，市场粮源供给充足，全年玉米价格缺乏大幅上涨的基础，预计将以稳中有升的走势为主。今日，农业农村部就2018年主要农产品市场运行情况举行发布会。会上有记者提问到：刚才提到2018年我国玉米库存消化超出预期，2019年是否会继续这一趋势？是否会出现玉米供给偏紧、价格大幅上涨的情况？唐珂回应，玉米市场的运行也是大家持续关注的热点。据农业农村部组织专家分析预测，随着东北地区玉米深加工产能陆续的投产，2018/19年度中国玉米需求将继续增加，产需存在一定的缺口。临储玉米将继续保持较快的消化节奏，因此2019年很可能是中国这一轮玉米去库存的尾声，期末库存有望恢复到正常水平。在供需关系趋紧、价格上涨的预期之下，2019年也可能是近年来中国玉米生产由降转增的转折之年，玉米种植面积将在市场机制的作用下有所恢复，在一定程度上增加玉米市场供给。“综合来看，虽然临储玉米消化偏快，但当前玉米库存依然处于较高水平，市场粮源供给充足，全年玉米价格缺乏大幅上涨的基础，预计将以稳中有升的走势为主，这是玉米的价格行情。”唐珂说。'}, {'title': '“快鹿系”集资诈骗案宣判 快鹿集团被处罚金15亿', 'newssource': '政府网站', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 11, 45), 'article': '来源：上海一中院原标题：上海一中院一审公开宣判“快鹿系”集资诈骗案2019年1月16日上午，上海市第一中级人民法院（以下简称上海一中院）依法公开宣判被告单位上海快鹿投资（集团）有限公司、上海长宁东虹桥小额贷款股份有限公司、上海东虹桥融资担保股份有限公司（以下分别简称为快鹿集团、东虹桥小贷公司、东虹桥担保公司）以及被告人黄家骝、韦炎平、周萌萌、徐琪（美国籍）等15人集资诈骗、非法吸收公众存款系列案件，对快鹿集团、东虹桥小贷公司、东虹桥担保公司分别以集资诈骗罪判处罚金人民币十五亿元、二亿元、二亿元（以下币种均为人民币）；对黄家骝、韦炎平以集资诈骗罪判处无期徒刑，并处罚金；对徐琪以集资诈骗罪、非法吸收公众存款罪两罪并罚判处有期徒刑十三年，并处罚金；对周萌萌等其余12名被告人以集资诈骗罪分别判处有期徒刑十五年至九年不等的刑罚，并处罚金。经审理查明：2013年9月至2015年8月间，涉案人施建祥（另案处理）为实施非法集资活动，组建了个人实际控制的以快鹿集团为核心并统一管理东虹桥小贷公司、东虹桥担保公司以及金鹿系、当天系、中海投系等融资平台的快鹿系集团。2014年3月至2016年4月，涉案人施建祥指使东虹桥小贷公司提供虚假债权材料、东虹桥担保公司匹配虚假担保函件，再由金鹿系等融资平台包装成各种理财产品，连同中海投系融资平台擅自发行的基金产品等，在未经有关部门批准的情况下，采用召开推介会、发送传单和互联网广告、随机拨打电话、举办或赞助演出等方式通过门店、互联网等途径向社会公众公开宣传和销售，从而非法集资共计434亿余元。上述非法集资所得钱款均被转入涉案人施建祥、快鹿集团实际控制的银行账户，除282亿余元被用于兑付前期投资者本息外，其余款项被用于支付各项运营费用、股权收购和影视投资等经营活动、转移至境外和购置车辆以及个人挥霍、侵吞等。至案发，本案实际经济损失共计152亿余元。上海一中院认为，3家被告单位及黄家骝等15名单位直接负责的主管人员和其他直接责任人员，以非法占有为目的，使用诈骗方法非法集资，其行为均已构成集资诈骗罪，且数额特别巨大。被告人徐琪还违反国家有关规定，非法吸收公众存款，扰乱金融秩序，其行为又构成非法吸收公众存款罪，且数额巨大。上述被告单位和被告人的非法集资行为，造成近4万名被害人巨大经济损失，严重破坏国家金融秩序，严重危害国家金融安全，结合本案事实、性质、情节和社会危害程度，依法作出上述判决。被告人家属、被害人代表、美国驻上海总领事馆领事处官员等共计约300人旁听了一审宣判。本市司法机关将继续加强对涉案资产的追赃挽损工作，对在逃的涉案人员继续予以追捕、追诉。'}, {'title': '美国发布中国军力报告：聚焦台湾 渲染大国竞争', 'newssource': '环球网', 'comments': 846, 'editer': '赵明 ', 'dt': datetime.datetime(2019, 1, 16, 11, 44), 'article': '原标题：美国防情报局发中国军力报告“聚焦台湾”，大国竞争被一再渲染[环球时报-环球网报道 记者 郭媛丹]当地时间15日，由美国国防部下属机构国防情报局对外发布《中国军力报告》称，收复台湾是中国军事现代化的“主要动力”。专业人士认为，报告对两岸“和平统一”和“一国两制”，说三道四，干预中国内政，阻挠中国和平统一。一位不愿意透露姓名的专业人士16日上午对《环球时报》表示，这是美国2017年年底出台国家安全战略报告和2018年1月国防战略报告提出“重回大国竞争”时代大背景下，美国国防情报局首次发布中国军力报告。CNN在报道中强调，美国国防情报局这份中国军力报告强调“中国军力发展聚焦台湾”。该报告宣称，“北京长久以来的要求台湾与大陆统一、阻止台湾宣布独立的诉求是中国军事现代化的主要动力”。美国国防情报局网站上对此系列报告的介绍显示，为了应对美国所面临的主要外国军事力量挑战，2017年6月份国防情报局首次对外发布俄罗斯军事力量。今年公开发布中国军力报告。根据介绍，报告内容包括了中国国防和军事建设目标，战略意图等详细信息。报告还审查了支持实现这些目标的军队组织、机构的能力以及基础设施和工业基础。美国国防部情报局局长阿什利中将表示，该报告旨在帮助公众、领导者、伙伴国家认识美国在21世纪面临的挑战，更深入地了解美国国家安全面临的主要挑战和威胁。它侧重于我们的近邻竞争对手，以及伊朗，朝鲜和恐怖主义等挑战者。根据美国媒体报道，这份中国军力报告是应美国国会要求撰写的。报告称，中国已经迅速建立了一支强劲、具有杀伤力的军队，覆盖海、陆、空、太空和信息等各个领域。这个军队使得中国可以将自己的意志强加于该区域或是更远的地区。报告认为，未来解放军在装备上会更先进，操作也会更熟练，堪比任何现代化军队。 解放军将会获得更为先进的战斗机、海军舰船、导弹系统以及太空和网络领域的资产，使得解放军有能力应对远离中国海岸的21世纪的威胁。该报告称，“北京长期的兴趣是最终促使台湾与中国大陆统一，并阻止任何宣称台湾独立的企图 ，这已经是中国军队现代化的主要驱动力。”上文要求匿名的专业人士认为，该报告和美国国防战略报道基调是一样的，充满冷战、对抗的思维，渲染大国竞争。该网站刊登了一篇文章，“如果有任何人对当前世界陷入大国竞争还有所怀疑的话，请你读一读2019中国军力报告”，100多页对中国和平发展军力以及现代化建设的正常发展进行抹黑，称中国的发展战略是取代美国，把自己的规则强加于国际秩序，和美国的利益发生冲突等。第二，该报告污蔑中国，无视中国发展是靠中国人民勤劳和智慧，污蔑中国军队的发展靠盗窃知识产权，强制在华合资企业技术转让取得，对历史和现实的严重歪曲。在改革开放中不少外国企业和中国开展了良好的技术合作，美国国防局报告枉顾基本事实，指责中国 。第三报告对两岸“和平统一”和“一国两制”，说三道四，干预中国内政，阻挠中国和平统一。这位人士认为，该报告回应了美国国防部发布的美国战略报告，重申了大国竞争的论调，把中国作为最大的威胁，认为解放军军队现代化建议的长远目标是取代美国，这是战略误判，歪曲解放军维护国家主权和安全所必须进行的现代化建设。'}, {'title': '加速走近 中俄释放一重要信号', 'newssource': '参考消息', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 11, 43), 'article': '原标题：加速走近！中俄释放一重要信号——参考消息网1月16日报道 “今日俄罗斯”电视台网站1月15日刊载题为《贸易吸引力：俄中贸易额靠什么达到创纪录的1070亿美元？》的文章称，2018年俄中双边贸易额史上首次突破1000亿美元大关，达到1070亿美元。机电产品是中国的主要出口项目。俄公司的出口产品中原油、煤和锯材占多数。专家将两国贸易增长与美国关税上调和制裁论调联系在一起。文章称，中国海关总署14日发表声明称，2018年俄中贸易额增长27.1%，逾1070亿美元。塔斯社援引中国海关总署的声明称，“2018年中俄双边贸易额达到1070.6亿美元，首次超过1000亿美元，创历史新高。增速在我国前十大贸易伙伴中位列第一位”。中国海关总署表示，对俄出口以机电产品为主，自俄进口主要集中在原油、煤、锯材等能源资源类产品。文章认为，值得注意的是，俄中双边贸易额增幅为近三年来最大。此外，在中国的主要贸易伙伴中，中俄贸易增速最快。文章称，根据中国海关总署的统计数据，俄对华出口增速比进口增速高两倍多。2018年中国对俄出口额增长12%，达479.7亿美元，而中国自俄进口增幅为42.7%，达590.8亿美元。文章称，早前中国方面曾表示，中俄贸易额突破1000亿美元已非上限。俄罗斯总理德米特里·梅德韦杰夫则认为，两国贸易合作的新目标可能是年贸易额达到2000亿美元。文章称，卡尔波夫预测中国对俄罗斯油气和金属的需求将继续增长。不过这位专家强调，为达到2000亿美元目标，必须开发其他商品出口并实现出口多元化。文章介绍，在双边贸易额按计划增长的背景下，2018年俄中积极筹备向双边本币结算转变。文章称，2018年11月俄外贸经济银行行长伊戈尔·舒瓦洛夫表示，相关协议草案已起草完毕并递交两国领导人。文章援引俄第一副总理安东·西卢安诺夫的话说，关于双边本币结算的文件将同时适用于清算业务——在无现金结算基础上的商品、服务或证券双边结算。文章称，BCS全球市场公司首席经济学家弗拉基米尔·季霍米罗夫在本台的访谈中强调，本币结算能使俄罗斯和中国规避与使用美元有关的风险，尤其在制裁的论调之下。'}, {'title': '赵正永疑“授意”夺商人千亿煤矿 成女港商囊中物', 'newssource': '新浪新闻综合', 'comments': 846, 'editer': '张申 ', 'dt': datetime.datetime(2019, 1, 16, 11, 37), 'article': '原标题：香积寺真香！来源：每日经济新闻去年“七一”刚过，赵正永去了一趟香积寺。67岁的他看起来依旧精神烁烁，纯黑短袖T恤扎进皮带里，冒着中雨，穿过山门，拾级而上，方丈本昌大和尚亲自出门迎接。彼时，商人赵发琦举报材料中的另一重要角色、曾任榆林市委书记的胡志强落马不久，那尊两米高的翡翠玉观音，最终没能保佑他。但赵正永还是决定走一趟佛门，大家都说，“去过香积寺，平安又无事。”此后，其再无公开露面。央视新闻专题片《一抓到底正风纪》，这位“时任陕西省委书记”，连出镜思过的机会都没有。佛曰：“净化自己完全在于自己，别人无法代替。”一关于赵正永的传言，历时弥久。尔今靴子落地，回头再看数日前那部专题片，别有意味。总书记数次批示，查而不实，乃至让中纪委副书记带队查违建别墅，这也是头一遭。2014年5月13日，总书记就秦岭北麓西安段圈地建别墅问题作出重要批示，要求陕西省委省政府主要负责同志关注此事。根据原陕西省委常委、省委秘书长的刘小燕回忆，两日后，省委办公厅收到中办督察室传来的总书记的重要批示。时任省委的主要领导批示：由省委督察室会同西安市，尽快查清向中央报送材料。彼时的这位省委主要领导，其实就是当时的陕西省委书记赵正永。对总书记的重要批示，赵显然是没有放在心上，省委如此，层层传递之下，到了西安市更是如此。当时的陕西省委常委、西安市委书记魏民洲，尔今身陷囹圄，却还在片中侃侃而言，反倒是与秦岭整治有着重大关联的“省委主要领导”，未见出镜。应该不会是身体的问题，毕竟退休多时的他，早前还去了一趟秦岭脚下的香积寺，与几位法师把水言欢，坐而论道。如今再看，已然明了。对赵而言，其无论是从常务副省长到省长的跨越，还是从省长到书记的跨越，都被猜测会因为年龄问题，晋升的几率比较小。然而，其最终完成了两次较高难度的跨栏，成为正部级要员，执掌一方。坊间传言，这位政法系统出身大员，作风比较强硬，硬到最后就变成了强势。在同僚之间如此，对待一些经济纠纷，其行事指令更是如此。不过，那是他还没遇到“硬骨头”。譬如，那位有着男版秋菊之称，打了十几年官司的赵发琦。二2018年11月23日，崔永元在微博上发了张合影，说要讲一个跨度12年的诡异故事，并@了最高人民法院。合影里，陕北商人赵发琦站在崔永元的后面，还是那副样子，方脸，浓眉，蓄着络腮胡，一脸憨笑，与黄土地上很多农民并无二异。但赵发琦与很多农民又有着很大的不同——运气好买了个探矿权，探出了一个千亿煤矿，尔后从省长到院长勾结一起，要剥夺他祖宗八代修来的一次福利。据赵发琦的描述，时任省长的赵正永，对案件“事无巨细事必躬亲”。一度委派省高院副院长赴京，要求最高法“务必按照陕西省委的意思判决此案”……权力的肆意使用，让一切变得不再简单。赵发琦的噩梦由此开始——省高院改判双方之前合同无效；麾下公司被撤销工商登记；本人被当地警方网上追逃，后在榆林看守所被关押130多天……那个价值千亿的煤矿，在赵等人的“授意”下，成为一位女港商的囊中之物。不过近几年，一些曾在千亿矿权案中“推波助澜”的官员纷纷倒下。这些人有个共同特点，就是都曾出现于赵发琦的举报信之中。譬如，原陕西省国土资源厅厅长王登记，原陕西省发改委主任祝作利，原陕西省地矿局局长张宽民，原延长油田总经理王书宝，原榆林市委书记胡志强，原最高人民法院副院长奚晓明……再如，此番倒下的赵正永。崔永元在微博上，讲了一个关于案卷丢失的故事——当年的葫芦案重回公众视野，几个回合下来，到如今由中央政法委牵头，中央纪委国家监委、最高人民检察院、公安部参加，成立联合调查组开展调查……包括赵正永在内的一些人，相信比任何人都明白这其中的含义。三诗佛王维曾作《过香积寺》一诗，讲述了自己客驻寺院的感受，“薄暮空潭曲，安禅制毒龙”。“毒龙”在佛教中大抵是人的邪念妄想。香积寺之旅，赵正永心中“毒龙”制的如何，不得而知。不过“而今听雨僧庐下”，在那种情境，人往往会多想一些的。如回想起，50年前，那个17岁少年，在老家安徽的广阔天地度过两年轰轰烈烈的青葱岁月；尔后在马鞍山钢铁公司做铆工、钣金工，直到成为工农兵大学生；如回想起，从马钢公司一路升迁，一朝转战仕途，在马鞍山、黄山两市相继担任主要领导岗位，直至安徽省委政法委书记、省公安厅厅长等职；如回想起，17年前，由皖入陕，来到了这个他称之为“最后故乡”的地方，15年时光，先后担任省委政法委书记、副省长、省长，再到省委书记，官拜正部级……50年，那个少年越走越远，越爬越高，亦逐渐迷失。2016年，赵卸任省委书记，在交接发言时有过一番自述，“这些年，无论在什么岗位，我都牢记使命，以民为念，自觉任事担当，从未有丝毫松劲和懈怠。特别是担任省长、省委书记后，我更感使命责任重大，夙夜奉秦，不敢有任何私念和差错……”可惜，这种“夙夜奉秦”式的精神，如今现了原形。如秦岭违建别墅整治，“贯彻中央决策部署和总书记重要讲话精神不到位。”如千亿矿权一案，在诸多媒体看来，其所作所为，“以权代法、以权压法”。其实，把赵正永的问题，简单归咎于秦岭违建别墅和千亿矿权争夺，想必还是偏颇的。随着调查的逐渐深入，也许诸多暗影还会浮出水面，包括当年热热闹闹的“赵家网球队”诸成员……'}, {'title': '颜真卿真迹东京开展首日 博物馆门前排起长队', 'newssource': '环球网', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 11, 30), 'article': '[颜真卿真迹东京开展首日 现场视频]颜真卿《祭侄文稿》今起在东京国立博物馆展出。《祭侄文稿》由颜真卿于唐乾元元年（758年）写下，追祭在安史之乱中丧生的从侄颜季明，被誉为“天下第二行书”。台北故宫博物院的出借举动引发两岸网友争议， 展览第一天，环球网记者来到了东京国立博物馆，上午九时，博物馆门前已经排起了长队↓↓↓'}, {'title': '商务部：尽快提出具有中国特色的自由贸易港政策', 'newssource': '一财网', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 11, 25), 'article': '[商务部：尽快提出具有中国特色的自由贸易港政策和制度体系]商务部部长助理任鸿斌今日在新闻发布会上表示，2019年，将探索中国特色自由贸易港建设，借鉴国际经验，结合海南的特点，尽快提出具有中国特色的自由贸易港政策和制度体系；推进上海自由贸易试验区新片区设立及方案制订工作，支持上海在推进投资和贸易自由化便利化方面大胆创新探索；研究出台进一步推进自由贸易试验区扩大开放和创新发展的政策措施，推动重点改革事项在自由贸易试验区先行先试。'}, {'title': '中国对美投资降至7年最低 英媒:受美收紧审查拖累', 'newssource': '参考消息', 'comments': 846, 'editer': '张迪 ', 'dt': datetime.datetime(2019, 1, 16, 11, 24), 'article': '原标题：中国对美投资降至7年最低 英媒：受美收紧外资审查拖累参考消息网1月16日报道 英媒称，一份最新报告显示，随着华盛顿加强对外资并购交易的审查，中国对美国的投资减少了83%，降至7年来的最低点。据英国《金融时报》网站1月14日报道，根据美国荣鼎咨询公司发布的报告，2018年中国对美直接投资——包括已经完成的并购和绿地投资——从2017年的290亿美元降至48亿美元。2016年这个数字为460亿美元。由于有待进行的中国投资为5年来最低，这一下降趋势2019年可能还将持续。如果算上中国投资者进行的130亿美元美国资产剥离，2018年中国对美净投资实际上为负80亿美元。报告说，尽管去年中国对美风险资本投资创下了31亿美元的新纪录，但有迹象表明去年下半年出现了强劲阻力，原因包括美国审查范围扩大，把某些风投交易纳入审查范围等。中国对美投资是在这样的背景下急剧下降的：美国对中国技术发展的担忧日益加剧，同时，中美两国继续就贸易问题进行谈判。'}]
    


```python
# load pandas
import pandas as pd
df = pd.DataFrame(news_total)
df.head(10)
df.to_excel('news.xlsx')

'''
import sqlite3
with sqlite3.connect('news.sqlite') as db :
    #table connetion
    df.to_sql('news',con =db)
'''
```
