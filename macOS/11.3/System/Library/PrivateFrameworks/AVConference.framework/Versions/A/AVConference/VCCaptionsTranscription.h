/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableString, NSArray, NSString;

@interface VCCaptionsTranscription : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	NSMutableArray* _segments;
	NSMutableString* _formattedText;
	unsigned _utteranceNumber;
	unsigned _updateNumber;
	char _isLocal;
	char _isFinal;

}

@property (assign,nonatomic) unsigned utteranceNumber;                //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (assign,nonatomic) unsigned updateNumber;                   //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) char isLocal;                            //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) char isFinal;                            //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,readonly) NSArray * segments;                    //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSString * formattedText; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)segments;
-(NSString *)formattedText;
-(char)isLocal;
-(char)isFinal;
-(void)setIsFinal:(char)arg1 ;
-(void)setIsLocal:(char)arg1 ;
-(void)addSegment:(id)arg1 ;
-(unsigned)utteranceNumber;
-(void)setUtteranceNumber:(unsigned)arg1 ;
-(unsigned)updateNumber;
-(void)setUpdateNumber:(unsigned)arg1 ;
-(id)initWithUtteranceNumber:(unsigned)arg1 updateNumber:(unsigned)arg2 isLocal:(char)arg3 isFinal:(char)arg4 ;
@end
