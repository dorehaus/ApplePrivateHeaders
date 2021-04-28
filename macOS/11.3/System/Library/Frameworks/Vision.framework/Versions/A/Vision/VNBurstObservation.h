/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSDictionary, NSString;

@interface VNBurstObservation : VNObservation {

	NSArray* _allImageIdentifiers;
	NSArray* _bestImageIdentifiers;
	NSDictionary* _allImageStats;
	NSString* _coverImageIdentifier;
	NSArray* _clusters;
	char _isAction;
	char _isPortrait;

}

@property (nonatomic,retain) NSArray * allImageIdentifiers;                //@synthesize allImageIdentifiers=_allImageIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * bestImageIdentifiers;               //@synthesize bestImageIdentifiers=_bestImageIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * allImageStats;                 //@synthesize allImageStats=_allImageStats - In the implementation block
@property (nonatomic,retain) NSString * coverImageIdentifier;              //@synthesize coverImageIdentifier=_coverImageIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * clusters;                           //@synthesize clusters=_clusters - In the implementation block
@property (assign,nonatomic) char isAction;                                //@synthesize isAction=_isAction - In the implementation block
@property (assign,nonatomic) char isPortrait;                              //@synthesize isPortrait=_isPortrait - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)clusters;
-(void)setClusters:(NSArray *)arg1 ;
-(NSArray *)allImageIdentifiers;
-(void)setAllImageIdentifiers:(NSArray *)arg1 ;
-(NSArray *)bestImageIdentifiers;
-(void)setBestImageIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)allImageStats;
-(void)setAllImageStats:(NSDictionary *)arg1 ;
-(NSString *)coverImageIdentifier;
-(void)setCoverImageIdentifier:(NSString *)arg1 ;
-(char)isAction;
-(void)setIsAction:(char)arg1 ;
-(char)isPortrait;
-(void)setIsPortrait:(char)arg1 ;
@end

