/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNRecognizedTextObservation : VNRectangleObservation {

	char _isTitle;
	NSArray* _textObjects;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * textObjects;                 //@synthesize textObjects=_textObjects - In the implementation block
@property (assign,nonatomic) char isTitle;                        //@synthesize isTitle=_isTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isTitle;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)topCandidates:(unsigned long long)arg1 ;
-(NSArray *)textObjects;
-(void)setTextObjects:(NSArray *)arg1 ;
-(void)setIsTitle:(char)arg1 ;
@end
