/****************************************************************************
 Copyright (c) 2014-2015 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __COCOS2D__UI__WEBVIEWIMPL_ANDROID_H_
#define __COCOS2D__UI__WEBVIEWIMPL_ANDROID_H_
/// @cond DO_NOT_SHOW

#include "cocos2d.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

#include <iosfwd>
#include "ExtensionMacros.h"

NS_CC_EXT_BEGIN

class WebView;

class WebViewImpl {
public:
    WebViewImpl(WebView *webView);
    
    virtual ~WebViewImpl();
    
    void setJavascriptInterfaceScheme(const std::string &scheme);
    
    void loadHTMLString(const std::string &string, const std::string &baseURL);
    
    void loadURL(const std::string &url);
    
    void loadFile(const std::string &fileName);
    
    void stopLoading();
    
    void reload();
    
    bool canGoBack();
    
    bool canGoForward();
    
    void goBack();
    
    void goForward();
    
    void evaluateJS(const std::string &js);
    
    void setScalesPageToFit(const bool scalesPageToFit);
    
    virtual void draw(void);
    
    virtual void setVisible(bool visible);
    
    static bool shouldStartLoading(const int viewTag, const std::string &url);
    static void didFinishLoading(const int viewTag, const std::string &url);
    static void didFailLoading(const int viewTag, const std::string &url);
    static void onJsCallback(const int viewTag, const std::string &message);
    
private:
    int _viewTag;
    WebView *_webView;
};

NS_CC_EXT_END

#endif /* #if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID) */
/// @endcond
#endif /* __COCOS2D__UI__WEBVIEWIMPL_ANDROID_H_ */
