/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSpeechToken : NSObject <NSSecureCoding> {

	char _removeSpaceBefore;
	char _removeSpaceAfter;
	NSString* _text;
	NSString* _phoneSequence;
	NSString* _ipaPhoneSequence;
	long long _confidenceScore;
	double _startTime;
	double _silenceStartTime;
	double _endTime;

}

@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * phoneSequence;                 //@synthesize phoneSequence=_phoneSequence - In the implementation block
@property (nonatomic,copy) NSString * ipaPhoneSequence;              //@synthesize ipaPhoneSequence=_ipaPhoneSequence - In the implementation block
@property (assign,nonatomic) long long confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double silenceStartTime;                //@synthesize silenceStartTime=_silenceStartTime - In the implementation block
@property (assign,nonatomic) double endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) char removeSpaceBefore;                 //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (assign,nonatomic) char removeSpaceAfter;                  //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)text;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setText:(NSString *)arg1 ;
-(void)setConfidenceScore:(long long)arg1 ;
-(long long)confidenceScore;
-(NSString *)ipaPhoneSequence;
-(void)setIpaPhoneSequence:(NSString *)arg1 ;
-(NSString *)phoneSequence;
-(void)setPhoneSequence:(NSString *)arg1 ;
-(char)removeSpaceAfter;
-(void)setRemoveSpaceAfter:(char)arg1 ;
-(char)removeSpaceBefore;
-(void)setRemoveSpaceBefore:(char)arg1 ;
-(double)silenceStartTime;
-(void)setSilenceStartTime:(double)arg1 ;
-(id)aceToken;
@end
