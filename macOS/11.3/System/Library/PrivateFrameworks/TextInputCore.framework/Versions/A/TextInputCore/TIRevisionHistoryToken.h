/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString;

@interface TIRevisionHistoryToken : NSObject {

	char _accepted;
	unsigned _usageLearningMask;
	unsigned _usageTrackingMask;
	NSString* _tokenInputString;
	unsigned long long _offset;
	TITokenID _tokenID;
	NSString* _tokenDictionaryString;
	NSString* _userTyping;

}

@property (nonatomic,copy) NSString * tokenInputString;                    //@synthesize tokenInputString=_tokenInputString - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                    //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) TITokenID tokenID;                            //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,copy) NSString * tokenDictionaryString;               //@synthesize tokenDictionaryString=_tokenDictionaryString - In the implementation block
@property (nonatomic,copy) NSString * userTyping;                          //@synthesize userTyping=_userTyping - In the implementation block
@property (assign,nonatomic) unsigned usageLearningMask;                   //@synthesize usageLearningMask=_usageLearningMask - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask;                   //@synthesize usageTrackingMask=_usageTrackingMask - In the implementation block
@property (assign,getter=isAccepted,nonatomic) char accepted;              //@synthesize accepted=_accepted - In the implementation block
-(id)description;
-(unsigned long long)offset;
-(TITokenID)tokenID;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setTokenID:(TITokenID)arg1 ;
-(unsigned)usageTrackingMask;
-(void)setAccepted:(char)arg1 ;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(NSString *)tokenDictionaryString;
-(NSString *)tokenInputString;
-(void)setTokenInputString:(NSString *)arg1 ;
-(void)setTokenDictionaryString:(NSString *)arg1 ;
-(NSString *)userTyping;
-(void)setUserTyping:(NSString *)arg1 ;
-(unsigned)usageLearningMask;
-(void)setUsageLearningMask:(unsigned)arg1 ;
-(char)isAccepted;
@end

