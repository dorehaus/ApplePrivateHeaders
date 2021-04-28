/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/ICNFMCMessage.h>

@interface ICNFMCRemoteMessage : ICNFMCMessage {

	SCD_Struct_IC6 _remoteFlags;
	unsigned long long _messageSize;

}

@property (assign,nonatomic) SCD_Struct_IC6 remoteFlags;                  //@synthesize remoteFlags=_remoteFlags - In the implementation block
@property (assign,nonatomic) char isPartial; 
@property (assign,nonatomic) char partsHaveBeenCached; 
@property (assign,nonatomic) char hasTemporaryUid; 
@property (assign,nonatomic) unsigned long long messageSize;              //@synthesize messageSize=_messageSize - In the implementation block
-(id)initWithSize:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(char)isPartial;
-(void)setPartsHaveBeenCached:(char)arg1 ;
-(void)setIsPartial:(char)arg1 ;
-(char)partsHaveBeenCached;
-(SCD_Struct_IC6)remoteFlags;
-(char)hasTemporaryUid;
-(void)setHasTemporaryUid:(char)arg1 ;
-(void)setRemoteFlags:(SCD_Struct_IC6)arg1 ;
@end

