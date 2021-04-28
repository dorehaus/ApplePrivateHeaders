/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Versions/A/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCServiceListenerDelegate.h>

@protocol XPCNSServiceListenerDelegate;
@class XPCServiceListener, NSString;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate> {

	XPCServiceListener* _serviceListener;
	id<XPCNSServiceListenerDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) id<XPCNSServiceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<XPCNSServiceListenerDelegate>)delegate;
-(void)start;
-(NSString *)serviceName;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(char)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2 ;
@end

