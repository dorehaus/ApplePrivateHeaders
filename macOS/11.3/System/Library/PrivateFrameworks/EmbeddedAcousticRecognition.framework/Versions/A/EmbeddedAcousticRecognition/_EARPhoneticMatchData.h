/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARPhoneticMatchData : NSObject {

	shared_ptr<quasar::DataFeed>* _dataFeed;

}

@property (nonatomic,readonly) shared_ptr<quasar::DataFeed>* dataFeed;              //@synthesize dataFeed=_dataFeed - In the implementation block
-(int)convertFeedType:(long long)arg1 ;
-(id)initWithFeedType:(long long)arg1 jsonConfigFile:(id)arg2 ;
-(void)writeTsv:(id)arg1 ;
-(void)sortItemsByPriorDesc;
-(void)sortItemsByPriorAsc;
-(void)normalizePriors;
-(void)expDecayPriors;
-(void)powerScalePriors;
-(void)applyRegexEnumerations;
-(char)appendData:(id)arg1 prior:(float)arg2 ;
-(char)roomForMoreData;
-(shared_ptr<quasar::DataFeed>*)dataFeed;
@end

