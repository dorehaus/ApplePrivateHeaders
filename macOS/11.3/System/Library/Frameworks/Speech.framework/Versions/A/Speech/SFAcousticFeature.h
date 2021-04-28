/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Speech.framework/Versions/A/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFAcousticFeature : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _acousticFeatureValuePerFrame;
	double _frameDuration;

}

@property (nonatomic,copy,readonly) NSArray * acousticFeatureValuePerFrame;              //@synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame - In the implementation block
@property (nonatomic,readonly) double frameDuration;                                     //@synthesize frameDuration=_frameDuration - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)frameDuration;
-(NSArray *)acousticFeatureValuePerFrame;
-(id)_initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2 ;
@end

