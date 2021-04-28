/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKConnection : NSObject <WKObject> {

	WeakObjCPtr<id<WKConnectionDelegate>> _delegate;

}

@property (assign) id<WKConnectionDelegate> delegate; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WKConnectionDelegate>)delegate;
-(void)setDelegate:(id<WKConnectionDelegate>)arg1 ;
-(WebConnection*)_connection;
-(Object*)_apiObject;
-(void)sendMessageWithName:(id)arg1 body:(id)arg2 ;
@end
