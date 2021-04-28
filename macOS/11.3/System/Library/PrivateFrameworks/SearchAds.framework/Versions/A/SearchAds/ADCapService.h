/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/Versions/A/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADCapData;

@interface ADCapService : NSObject {

	ADCapData* _capData;

}

@property (nonatomic,retain) ADCapData * capData;              //@synthesize capData=_capData - In the implementation block
-(id)init;
-(id)impressionCountByLine;
-(id)clickCountByLine;
-(void)updateFrequencyCapData:(id)arg1 ;
-(void)updateDownloadData:(id)arg1 identifier:(id)arg2 forType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateClickData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateCapData:(id)arg1 forType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanDownloadData;
-(ADCapData *)capData;
-(void)setCapData:(ADCapData *)arg1 ;
@end

