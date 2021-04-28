/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/CRKIDSListener.h>

@class IDSService, NSString;

@interface CRKConcreteIDSMessageSendListener : NSObject <IDSServiceDelegate, CRKIDSListener> {

	IDSService* _service;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) IDSService * service;                //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listenerWithService:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(IDSService *)service;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(id)initWithService:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

