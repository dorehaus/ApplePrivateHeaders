/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormAutoFillCorrectionsStore;
@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;

}
+(id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(char)arg3 ;
+(id)_correctionsSchema;
+(id)test_correctionsSchema;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)getLastCorrectionsRetrievalURLStringWithResultHandler:(/*^block*/id)arg1 ;
-(void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2 ;
@end

