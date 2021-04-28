/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMRemoteActionXPCProtocolNSXPCProxyCreating, AMRemoteActionVariableControllerXPCProtocolNSXPCProxyCreating;
@class NSXPCConnection, NSUUID, AMRemoteActionHostViewController, AMRemoteActionVariableDelegate, NSRemoteViewController;

@interface AMRemoteActionStorage : NSObject {

	NSXPCConnection* _xpcConnection;
	id<AMRemoteActionXPCProtocol><NSXPCProxyCreating> _remoteActionProxy;
	NSUUID* _serviceUUID;
	AMRemoteActionHostViewController* _hostViewController;
	NSUUID* _remoteActionUUID;
	AMRemoteActionVariableDelegate* _variableDelegate;
	id<AMRemoteActionVariableControllerXPCProtocol><NSXPCProxyCreating> _variableControllerProxy;
	NSRemoteViewController* _dummyRemoteViewController;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;                                                                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) id<AMRemoteActionXPCProtocol><NSXPCProxyCreating> remoteActionProxy;                                      //@synthesize remoteActionProxy=_remoteActionProxy - In the implementation block
@property (nonatomic,retain) NSUUID * serviceUUID;                                                                                     //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,retain) AMRemoteActionHostViewController * hostViewController;                                                    //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) NSUUID * remoteActionUUID;                                                                                //@synthesize remoteActionUUID=_remoteActionUUID - In the implementation block
@property (nonatomic,retain) AMRemoteActionVariableDelegate * variableDelegate;                                                        //@synthesize variableDelegate=_variableDelegate - In the implementation block
@property (nonatomic,retain) id<AMRemoteActionVariableControllerXPCProtocol><NSXPCProxyCreating> variableControllerProxy;              //@synthesize variableControllerProxy=_variableControllerProxy - In the implementation block
@property (nonatomic,retain) NSRemoteViewController * dummyRemoteViewController;                                                       //@synthesize dummyRemoteViewController=_dummyRemoteViewController - In the implementation block
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(AMRemoteActionVariableDelegate *)variableDelegate;
-(NSUUID *)serviceUUID;
-(void)setHostViewController:(AMRemoteActionHostViewController *)arg1 ;
-(AMRemoteActionHostViewController *)hostViewController;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(void)setVariableDelegate:(AMRemoteActionVariableDelegate *)arg1 ;
-(id<AMRemoteActionXPCProtocol><NSXPCProxyCreating>)remoteActionProxy;
-(void)setRemoteActionProxy:(id<AMRemoteActionXPCProtocol><NSXPCProxyCreating>)arg1 ;
-(void)setRemoteActionUUID:(NSUUID *)arg1 ;
-(void)setVariableControllerProxy:(id<AMRemoteActionVariableControllerXPCProtocol><NSXPCProxyCreating>)arg1 ;
-(NSRemoteViewController *)dummyRemoteViewController;
-(NSUUID *)remoteActionUUID;
-(void)setDummyRemoteViewController:(NSRemoteViewController *)arg1 ;
-(id<AMRemoteActionVariableControllerXPCProtocol><NSXPCProxyCreating>)variableControllerProxy;
@end

