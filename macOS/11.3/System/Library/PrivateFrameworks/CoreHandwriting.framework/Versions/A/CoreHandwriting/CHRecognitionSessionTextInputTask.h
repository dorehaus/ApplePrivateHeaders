/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHRecognitionSessionTask.h>

@class NSArray, CHTextInputQuery;

@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask {

	NSArray* _initialTextInputTargets;
	CHTextInputQuery* _activeTextInputQuery;

}

@property (assign,nonatomic) id<CHRecognitionSessionTextInputTaskDelegate> delegate; 
@property (nonatomic,retain,readonly) NSArray * initialTextInputTargets;                          //@synthesize initialTextInputTargets=_initialTextInputTargets - In the implementation block
@property (nonatomic,retain) CHTextInputQuery * activeTextInputQuery;                             //@synthesize activeTextInputQuery=_activeTextInputQuery - In the implementation block
+(CGRect)_contextBoundsForTargetContentInfo:(id)arg1 ;
+(id)lastStrokeInGroup:(id)arg1 strokeProvider:(id)arg2 ;
-(void)dealloc;
-(id)clutterFilter;
-(CHTextInputQuery *)activeTextInputQuery;
-(id)_dataSource:(id)arg1 inputTargetContentInfoForStrokeGroups:(id)arg2 groupingManager:(id)arg3 ;
-(id)_textCorrectionResultForStrokeGroup:(id)arg1 groupingManager:(id)arg2 targetContentInfo:(id)arg3 locales:(id)arg4 previousCorrectionResult:(id)arg5 ;
-(NSArray *)initialTextInputTargets;
-(id)_dataSource:(id)arg1 textInputTargetForStrokeGroup:(id)arg2 simultaneousGroups:(id)arg3 ;
-(id)initWithLocales:(id)arg1 strokeProvider:(id)arg2 initialTextInputTargets:(id)arg3 inputResult:(id)arg4 recognitionEnvironment:(long long)arg5 ;
-(id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned)arg5 ;
-(id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2 ;
-(id)textCorrectionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2 ;
-(id)newStrokeClassifier;
-(id)newGroupingManager;
-(void)setActiveTextInputQuery:(CHTextInputQuery *)arg1 ;
@end

