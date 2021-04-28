/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MPWeighterConstraint : NSObject {

	long long numOfImages;
	NSDictionary* nextConstraints;
	NSString* presetID;
	long long movieCount;
	char moviesOnly;
	char ignoreMovies;
	long long wideLandscape;
	long long square;
	long long landscape;
	long long portrait;
	long long hPanoramas;
	long long vPanoramas;
	long long supportsHPanoramas;
	long long supportsVPanoramas;
	long long supportsAllPanoramas;
	long long allPanoramas;
	char hasPanorama;
	NSArray* maxAspectRatios;
	NSArray* minAspectRatios;
	NSArray* tags;
	char tagsOnSourceOnly;
	char shelf;

}

@property (nonatomic,retain) NSDictionary * nextConstraints; 
@property (nonatomic,retain) NSString * presetID; 
@property (nonatomic,retain) NSArray * maxAspectRatios; 
@property (nonatomic,retain) NSArray * minAspectRatios; 
@property (nonatomic,retain) NSArray * tags; 
-(void)dealloc;
-(id)init;
-(NSArray *)tags;
-(void)setTags:(NSArray *)arg1 ;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)setNextConstraints:(NSDictionary *)arg1 ;
-(void)setMaxAspectRatios:(NSArray *)arg1 ;
-(void)setMinAspectRatios:(NSArray *)arg1 ;
-(NSDictionary *)nextConstraints;
-(NSArray *)maxAspectRatios;
-(NSArray *)minAspectRatios;
@end

