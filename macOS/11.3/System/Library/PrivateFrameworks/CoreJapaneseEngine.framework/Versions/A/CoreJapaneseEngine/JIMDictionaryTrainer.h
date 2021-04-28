/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreJapaneseEngine.framework/Versions/A/CoreJapaneseEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSOperationQueue, NSOperation, NSMutableDictionary, NSMutableArray, NSArray;

@interface JIMDictionaryTrainer : NSObject {

	char _needUpdateTimestamp;
	char _lastOperationUnFinished;
	NSTimer* _timer;
	/*^block*/id _mecabraGetter;
	NSOperationQueue* _mecabraQueue;
	NSOperationQueue* _asyncTaskQueue;
	NSOperation* _trainingOperation;
	NSMutableDictionary* _unknownWords;
	NSMutableArray* _foundUnknownWords;
	NSArray* _myMailAddresses;
	void* _unknownUsedWordDict;
	void* _unknownUnusedWordDict;
	double _currentInterval;
	double _longInterval;
	double _shortInterval;
	double _lastResumeTime;

}

@property (retain) NSTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
@property (assign) id mecabraGetter;                                //@synthesize mecabraGetter=_mecabraGetter - In the implementation block
@property (retain) NSOperationQueue * mecabraQueue;                 //@synthesize mecabraQueue=_mecabraQueue - In the implementation block
@property (retain) NSOperationQueue * asyncTaskQueue;               //@synthesize asyncTaskQueue=_asyncTaskQueue - In the implementation block
@property (__weak) NSOperation * trainingOperation;                 //@synthesize trainingOperation=_trainingOperation - In the implementation block
@property (retain) NSMutableDictionary * unknownWords;              //@synthesize unknownWords=_unknownWords - In the implementation block
@property (retain) NSMutableArray * foundUnknownWords;              //@synthesize foundUnknownWords=_foundUnknownWords - In the implementation block
@property (retain) NSArray * myMailAddresses;                       //@synthesize myMailAddresses=_myMailAddresses - In the implementation block
@property (assign) void* unknownUsedWordDict;                       //@synthesize unknownUsedWordDict=_unknownUsedWordDict - In the implementation block
@property (assign) void* unknownUnusedWordDict;                     //@synthesize unknownUnusedWordDict=_unknownUnusedWordDict - In the implementation block
@property (assign) char needUpdateTimestamp;                        //@synthesize needUpdateTimestamp=_needUpdateTimestamp - In the implementation block
@property (assign) char lastOperationUnFinished;                    //@synthesize lastOperationUnFinished=_lastOperationUnFinished - In the implementation block
@property (assign) double currentInterval;                          //@synthesize currentInterval=_currentInterval - In the implementation block
@property (assign) double longInterval;                             //@synthesize longInterval=_longInterval - In the implementation block
@property (assign) double shortInterval;                            //@synthesize shortInterval=_shortInterval - In the implementation block
@property (assign) double lastResumeTime;                           //@synthesize lastResumeTime=_lastResumeTime - In the implementation block
+(void)scheduleDictionaryTrainingWithMecabraGetter:(/*^block*/id)arg1 inQueue:(id)arg2 ;
+(void)updateConfirmedWord:(void*)arg1 ;
+(void)resetTraining;
+(id)_sharedDictionaryTrainerWithCreation:(char)arg1 ;
+(id)_hiraganaStringForValidKatanaka:(id)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)setCurrentInterval:(double)arg1 ;
-(double)currentInterval;
-(void)setMecabraGetter:(id)arg1 ;
-(void)setMecabraQueue:(NSOperationQueue *)arg1 ;
-(double)longInterval;
-(NSMutableArray *)foundUnknownWords;
-(void)_updateTrainerDictionaryWithArray:(id)arg1 ;
-(char)lastOperationUnFinished;
-(void)setLastOperationUnFinished:(char)arg1 ;
-(NSOperationQueue *)asyncTaskQueue;
-(void)_setMecabraDictionaryFromWordData:(id)arg1 ;
-(void)setUnknownWords:(NSMutableDictionary *)arg1 ;
-(NSOperationQueue *)mecabraQueue;
-(id)mecabraGetter;
-(void*)unknownUsedWordDict;
-(void)setUnknownUsedWordDict:(void*)arg1 ;
-(void*)unknownUnusedWordDict;
-(void)setUnknownUnusedWordDict:(void*)arg1 ;
-(NSMutableDictionary *)unknownWords;
-(void)setNeedUpdateTimestamp:(char)arg1 ;
-(void)setAsyncTaskQueue:(NSOperationQueue *)arg1 ;
-(void)setFoundUnknownWords:(NSMutableArray *)arg1 ;
-(char)needUpdateTimestamp;
-(void)_saveUnknownWordsData;
-(NSOperation *)trainingOperation;
-(void)setTrainingOperation:(NSOperation *)arg1 ;
-(NSArray *)myMailAddresses;
-(void)setMyMailAddresses:(NSArray *)arg1 ;
-(void)setLongInterval:(double)arg1 ;
-(double)shortInterval;
-(void)setShortInterval:(double)arg1 ;
-(double)lastResumeTime;
-(void)setLastResumeTime:(double)arg1 ;
@end

