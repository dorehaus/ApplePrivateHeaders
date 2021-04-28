/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSArray, _WKFrameHandle, NSString;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {

	ObjectStorage<WebKit::WebFrame> _frame;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * childFrames; 
@property (nonatomic,readonly) char containsAnyFormElements; 
@property (nonatomic,readonly) char isMainFrame; 
@property (nonatomic,readonly) _WKFrameHandle * handle; 
@property (nonatomic,readonly) NSArray * appleTouchIconURLs; 
@property (nonatomic,readonly) NSArray * faviconURLs; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lookUpFrameFromHandle:(id)arg1 ;
+(id)lookUpFrameFromJSContext:(id)arg1 ;
-(void)dealloc;
-(_WKFrameHandle *)handle;
-(NSURL *)URL;
-(id)hitTest:(CGPoint)arg1 ;
-(char)isMainFrame;
-(NSArray *)childFrames;
-(Object*)_apiObject;
-(id)_securityOrigin;
-(id)_certificateChain;
-(id)jsContextForWorld:(id)arg1 ;
-(id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)jsRangeForRangeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)_browserContextController;
-(char)containsAnyFormElements;
-(NSArray *)appleTouchIconURLs;
-(NSArray *)faviconURLs;
-(id)_parentFrame;
-(char)_hasCustomContentProvider;
-(SecTrustRef)_serverTrust;
-(id)_provisionalURL;
@end
