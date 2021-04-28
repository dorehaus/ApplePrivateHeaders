/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AUPBServing.h>

@protocol AUPBRegistrarHosting;
@class NSXPCConnection, NSXPCListener, NSMutableArray, NSString;

@interface AUPBServer : NSObject <NSXPCListenerDelegate, AUPBServing> {

	NSXPCConnection* mRegistrarConnection;
	id<AUPBRegistrarHosting> mProxyInterface;
	NSXPCListener* mListener;
	NSMutableArray* mClientConnections;
	unique_ptr<CADeprecated::CAMutex, std::__1::default_delete<CADeprecated::CAMutex>>* mLock;
	map<unsigned int, RemoteAUHandleInfo, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, RemoteAUHandleInfo>>>* mAUHandlesToInfo;
	map<unsigned int, AUProcessingBlock, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AUProcessingBlock>>>* mBlockHandlesToMethods;
	unsigned mAUPBRefCounter;
	unique_ptr<TestAUProcessingBlock, std::__1::default_delete<TestAUProcessingBlock>>* mTestBlock;
	unsigned mAUHandleCntr;
	int mNotifyToken;
	char mValidToken;
	char mConnectionAcknowledged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)copyProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 intoReply:(/*^block*/id)arg3 ;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 value:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)getAudioUnit:(unsigned)arg1 propertyInfo:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)getAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)setAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(id)arg5 withReply:(/*^block*/id)arg6 ;
-(void)getAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)setAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(float)arg5 withReply:(/*^block*/id)arg6 ;
-(void)checkConnectRegistrar;
-(void)startRegistrarConnection;
-(void)handleRegistrarCrash;
-(OpaqueAUPBRef)registerBlock:(const AUPBMethods*)arg1 withUserData:(void*)arg2 ;
-(int)unregisterBlock:(OpaqueAUPBRef)arg1 ;
-(int)registerAU:(OpaqueRemoteAudioUnitRef)arg1 inBlock:(OpaqueAUPBRef)arg2 ;
-(int)unregisterAU:(OpaqueRemoteAudioUnitRef)arg1 ;
-(unsigned)handleFromAUPBRef:(OpaqueAUPBRef)arg1 ;
-(void)processingBlockRef:(OpaqueAUPBRef)arg1 propertyChanged:(unsigned)arg2 ;
-(void)processingBlock:(OpaqueAUPBRef)arg1 properties:(const unsigned*)arg2 count:(unsigned)arg3 changedWithQualifierData:(void*)arg4 length:(unsigned)arg5 ;
-(void)blockListChanged;
-(AUProcessingBlock*)aupbFromAUHandle:(unsigned)arg1 ;
-(OpaqueRemoteAudioUnitRef)auRefFromHandle:(unsigned)arg1 ;
-(unsigned)auHandleFromRef:(OpaqueRemoteAudioUnitRef)arg1 ;
-(AUProcessingBlock*)aupbFromRef:(OpaqueAUPBRef)arg1 ;
@end

