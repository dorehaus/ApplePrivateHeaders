/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSUUID, NENexusFlowManager, NWEndpoint, NWParameters;

@interface NENexusFlow : NSObject {

	unsigned long long _state;
	nw_protocol* _protocol;
	NSUUID* _nexusInstance;
	NENexusFlowManager* _manager;

}

@property (retain) NSUUID * nexusInstance;                             //@synthesize nexusInstance=_nexusInstance - In the implementation block
@property (assign,nonatomic) nw_protocol* protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (__weak) NENexusFlowManager * manager;                       //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) NSUUID * clientIdentifier; 
-(void)setupFlowProtocolWithUUID:(id)arg1 ;
-(NSUUID *)nexusInstance;
-(void)setNexusInstance:(NSUUID *)arg1 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(nw_protocol*)protocol;
-(NENexusFlowManager *)manager;
-(void)setManager:(NENexusFlowManager *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)setProtocol:(nw_protocol*)arg1 ;
-(NWParameters *)parameters;
-(NSUUID *)clientIdentifier;
@end

