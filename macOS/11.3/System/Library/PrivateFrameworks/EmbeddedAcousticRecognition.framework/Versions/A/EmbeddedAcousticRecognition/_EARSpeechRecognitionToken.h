/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying> {

	Token* _quasarToken;

}

@property (nonatomic,readonly) Token quasarToken;                        //@synthesize quasarToken=_quasarToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenName; 
@property (nonatomic,readonly) double start; 
@property (nonatomic,readonly) double end; 
@property (nonatomic,readonly) double silenceStart; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) char hasSpaceAfter; 
@property (nonatomic,readonly) char hasSpaceBefore; 
@property (nonatomic,readonly) NSString * phoneSequence; 
@property (nonatomic,readonly) NSString * ipaPhoneSequence; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)start;
-(double)confidence;
-(double)end;
-(NSString *)tokenName;
-(NSString *)ipaPhoneSequence;
-(NSString *)phoneSequence;
-(id)_initWithQuasarToken:(const Token*)arg1 ;
-(Token)quasarToken;
-(double)silenceStart;
-(char)hasSpaceAfter;
-(char)hasSpaceBefore;
-(id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(char)arg6 hasSpaceBefore:(char)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 ;
@end

