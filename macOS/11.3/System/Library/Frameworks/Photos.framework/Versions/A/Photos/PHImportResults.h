/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHImportExceptionRecorder.h>

@class PHImportSource, NSMutableArray, NSDate, NSMutableDictionary, NSError;

@interface PHImportResults : PHImportExceptionRecorder {

	unsigned char _result;
	PHImportSource* _importSource;
	NSMutableArray* _importRecords;
	NSDate* _startTime;
	NSDate* _endTime;
	NSMutableDictionary* _pmrInfo;

}

@property (nonatomic,retain) NSDate * startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                            //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pmrInfo;               //@synthesize pmrInfo=_pmrInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * importRecords;              //@synthesize importRecords=_importRecords - In the implementation block
@property (readonly) PHImportSource * importSource;                       //@synthesize importSource=_importSource - In the implementation block
@property (readonly) unsigned long long importedCount; 
@property (readonly) unsigned long long failedToImportCount; 
@property (readonly) unsigned char result;                                //@synthesize result=_result - In the implementation block
@property (readonly) NSError * error; 
+(id)resultsWithException:(id)arg1 ;
+(id)resultsWithExceptions:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(unsigned char)result;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(double)runTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(id)exceptions;
-(void)addUnsupportedPath:(id)arg1 ;
-(void)addImportRecord:(id)arg1 ;
-(unsigned long long)importedCount;
-(unsigned long long)failedToImportCount;
-(id)importRecordExceptions;
-(id)generatePMRInfo;
-(void)insertStart:(id)arg1 end:(id)arg2 intoGroups:(id)arg3 ofType:(unsigned long long)arg4 ;
-(void)verifyGroups:(id)arg1 ;
-(void)log:(id)arg1 activity:(id)arg2 description:(id)arg3 digits:(unsigned long long)arg4 ;
-(void)logPMR;
-(PHImportSource *)importSource;
-(NSMutableArray *)importRecords;
-(void)setImportRecords:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)pmrInfo;
-(void)setPmrInfo:(NSMutableDictionary *)arg1 ;
@end

