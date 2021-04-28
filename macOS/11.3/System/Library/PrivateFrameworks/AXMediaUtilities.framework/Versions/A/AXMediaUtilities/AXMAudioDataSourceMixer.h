/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMAudioDataSource.h>

@class NSString, NSSet;

@interface AXMAudioDataSourceMixer : AXMAudioDataSource {

	NSString* _name;
	double _panning;
	NSSet* _dataSources;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double panning;                   //@synthesize panning=_panning - In the implementation block
@property (nonatomic,retain) NSSet * dataSources;              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,readonly) char isMonoOutput; 
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)dataSources;
-(void)addDataSource:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)setDataSources:(NSSet *)arg1 ;
-(id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(char)arg3 ;
-(void)setCurrentSampleIndex:(unsigned long long)arg1 ;
-(char)isMonoOutput;
-(double)panning;
-(void)removeAllDataSources;
-(void)prepareNextSamples:(unsigned long long)arg1 ;
-(void)setPanning:(double)arg1 ;
@end
