/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICNFIMAPMessageDetails : NSObject {

	char _isInvalid;
	unsigned _messageFlags;
	unsigned _uid;

}

@property (assign,nonatomic) unsigned messageFlags;              //@synthesize messageFlags=_messageFlags - In the implementation block
@property (assign,nonatomic) unsigned uid;                       //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) char isInvalid;                     //@synthesize isInvalid=_isInvalid - In the implementation block
+(id)newMessageDetailsWithPersistentIDType:(char)arg1 ;
+(id)searchDetails:(id)arg1 forUid:(unsigned)arg2 skippingUid:(unsigned)arg3 ;
-(id)description;
-(id)init;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(char)isInvalid;
-(void)setIsInvalid:(char)arg1 ;
-(unsigned)messageFlags;
-(void)setMessageFlags:(unsigned)arg1 ;
@end

