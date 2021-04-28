/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PSFeedbackAction, _PSPredictionContext, NSArray, NSString;

@interface _PSFeedback : NSObject {

	char _dryRun;
	float _numberOfVisibleSuggestions;
	_PSFeedbackAction* _action;
	double _delay;
	_PSPredictionContext* _context;
	NSArray* _suggestions;
	NSString* _sessionIdentifier;

}

@property (assign,nonatomic) char dryRun;                                                //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,readonly) _PSFeedbackAction * action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfEngagedSuggestion; 
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) _PSPredictionContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                                    //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) float numberOfVisibleSuggestions;                         //@synthesize numberOfVisibleSuggestions=_numberOfVisibleSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
+(id)feedbackForAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6 ;
-(_PSFeedbackAction *)action;
-(double)delay;
-(_PSPredictionContext *)context;
-(float)numberOfVisibleSuggestions;
-(NSArray *)suggestions;
-(char)dryRun;
-(void)setDryRun:(char)arg1 ;
-(NSString *)sessionIdentifier;
-(unsigned long long)indexOfEngagedSuggestion;
-(id)feedbackPayloadShowFamily:(id)arg1 ;
-(id)knowledgeEvent;
-(id)getTrialID;
-(id)initWithAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6 ;
@end

