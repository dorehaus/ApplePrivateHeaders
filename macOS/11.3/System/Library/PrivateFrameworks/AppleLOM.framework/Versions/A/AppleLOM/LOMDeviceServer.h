/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LOMDevice.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, LOMDeviceConnection, LOMControllerConnection, NSString;

@interface LOMDeviceServer : NSObject <LOMDevice> {

	char _isLOMSupported;
	NSObject*<OS_dispatch_queue> _requestQueue;
	id _identity;
	id _identityCert;
	NSArray* _caCerts;
	id _privateKey;
	LOMDeviceConnection* _deviceConnection;
	LOMControllerConnection* _controllerConnection;

}

@property (retain) NSObject*<OS_dispatch_queue> requestQueue;                   //@synthesize requestQueue=_requestQueue - In the implementation block
@property (retain) id identity;                                                 //@synthesize identity=_identity - In the implementation block
@property (retain) id identityCert;                                             //@synthesize identityCert=_identityCert - In the implementation block
@property (retain) NSArray * caCerts;                                           //@synthesize caCerts=_caCerts - In the implementation block
@property (retain) id privateKey;                                               //@synthesize privateKey=_privateKey - In the implementation block
@property (retain) LOMDeviceConnection * deviceConnection;                      //@synthesize deviceConnection=_deviceConnection - In the implementation block
@property (retain) LOMControllerConnection * controllerConnection;              //@synthesize controllerConnection=_controllerConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(char)start;
-(void)stop;
-(id)initWithServiceName:(id)arg1 ;
-(id)identity;
-(id)serialize;
-(void)setIdentity:(id)arg1 ;
-(id)privateKey;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)copyPropertyForKey:(id)arg1 ;
-(char)isSupported;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceConnection:(LOMDeviceConnection *)arg1 ;
-(LOMDeviceConnection *)deviceConnection;
-(char)remove:(id)arg1 error:(out id*)arg2 ;
-(NSArray *)caCerts;
-(id)identityCert;
-(void)refereshCertsAndKeys;
-(id)loadCertsAndKey;
-(char)install:(id)arg1 error:(out id*)arg2 ;
-(char)getInfo:(id*)arg1 error:(out id*)arg2 ;
-(void)completeDeviceRequest:(id)arg1 ;
-(id)handleDeviceRequest:(id)arg1 error:(id*)arg2 ;
-(LOMControllerConnection *)controllerConnection;
-(void)setControllerConnection:(LOMControllerConnection *)arg1 ;
-(void)setCaCerts:(NSArray *)arg1 ;
-(void)setPrivateKey:(id)arg1 ;
-(void)setIdentityCert:(id)arg1 ;
@end
