/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NetworkUtils : NSObject
+(id)encryptionInfoForKey:(unsigned long long)arg1 ;
+(char)createAndStartListener:(id*)arg1 withParameters:(id)arg2 ;
+(void)setUniquePIDOnParameters:(id)arg1 shouldRunInProcess:(char)arg2 ;
+(int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(char)arg3 error:(id*)arg4 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newEncryptionInfoWithMasterKeyIndex:(id)arg1 ;
+(char)createNWPathEvaluator:(id*)arg1 withIPAddress:(id)arg2 localPort:(int*)arg3 remotePort:(int)arg4 shouldRunInProcess:(char)arg5 ;
+(id)newNWConnectionWithIPAddress:(id)arg1 srcPort:(short)arg2 ;
+(int)nonConnectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newRTPSocketDictionary:(char)arg1 rtpSourcePort:(short)arg2 ;
+(id)securityKeyMaterialWithMasterKeyIndex:(id)arg1 ;
@end

