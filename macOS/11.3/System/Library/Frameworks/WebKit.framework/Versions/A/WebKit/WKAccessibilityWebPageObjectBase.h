/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKAccessibilityWebPageObjectBase : NSObject {

	NakedPtr<WebKit::WebPage>* m_page;
	ObjectIdentifier<WebCore::PageIdentifierType> m_pageID;
	id m_parent;
	BOOL m_hasMainFramePlugin;

}
-(id)accessibilityFocusedUIElement;
-(void)setHasMainFramePlugin:(BOOL)arg1 ;
-(id)accessibilityRootObjectWrapper;
-(NakedPtr<WebCore::AXObjectCache>*)axObjectCache;
-(id)accessibilityPluginObject;
-(void)setWebPage:(NakedPtr<WebKit::WebPage>*)arg1 ;
-(void)setRemoteParent:(id)arg1 ;
@end
