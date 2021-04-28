/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSInvestigationDelegate, CLSInvestigationInterviewDelegate;
#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSString, CLSInvestigationFeeder, NSMutableArray, CLSInspector, CLSClueCollection, NSArray, NSMutableDictionary;

@interface CLSInvestigation : NSObject {

	NSString* _uuid;
	id _context;
	CLSInvestigationFeeder* _feeder;
	id<CLSInvestigationDelegate> _delegate;
	id<CLSInvestigationInterviewDelegate> _interviewDelegate;
	NSMutableArray* _profiles;
	CLSInspector* _inspector;
	CLSClueCollection* _clueCollection;
	unsigned long long _precision;
	NSArray* _informants;
	NSMutableDictionary* _tracesLogsByURIs;
	NSMutableArray* _tracesLogsURIs;
	char _enableDebuggingClues;
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateDidEnd : 1;
		unsigned delegateNumberOfItems : 1;
		unsigned delegateSampleOfItems : 1;
	}  _investigationFlags;

}

@property (nonatomic,retain,readonly) CLSInvestigationFeeder * feeder;                                    //@synthesize feeder=_feeder - In the implementation block
@property (assign) char enableDebuggingClues;                                                             //@synthesize enableDebuggingClues=_enableDebuggingClues - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain,readonly) NSArray * profiles;                                                 //@synthesize profiles=_profiles - In the implementation block
@property (assign,nonatomic,__weak) id<CLSInvestigationDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CLSInvestigationInterviewDelegate> interviewDelegate;              //@synthesize interviewDelegate=_interviewDelegate - In the implementation block
@property (nonatomic,retain) id context;                                                                  //@synthesize context=_context - In the implementation block
@property (retain,readonly) CLSClueCollection * clueCollection;                                           //@synthesize clueCollection=_clueCollection - In the implementation block
@property (nonatomic,__weak,readonly) CLSInspector * inspector;                                           //@synthesize inspector=_inspector - In the implementation block
@property (assign,nonatomic) unsigned long long precision;                                                //@synthesize precision=_precision - In the implementation block
+(id)investigationWithProfiles:(id)arg1 ;
+(id)investigationWithProfiles:(id)arg1 clueDates:(id)arg2 clueLocations:(id)arg3 cluePeoples:(id)arg4 ;
-(id)description;
-(id)init;
-(id<CLSInvestigationDelegate>)delegate;
-(void)setDelegate:(id<CLSInvestigationDelegate>)arg1 ;
-(NSString *)uuid;
-(unsigned long long)numberOfItems;
-(id)context;
-(void)setContext:(id)arg1 ;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(NSArray *)profiles;
-(id)initWithProfiles:(id)arg1 ;
-(CLSInspector *)inspector;
-(id)description:(char)arg1 ;
-(CLSClueCollection *)clueCollection;
-(void)_didEndInvestigation:(char)arg1 ;
-(CLSInvestigationFeeder *)feeder;
-(void)_willBeginInvestigation:(id)arg1 ;
-(char)enableDebuggingClues;
-(id<CLSInvestigationInterviewDelegate>)interviewDelegate;
-(id)initWithClueCollection:(id)arg1 profiles:(id)arg2 ;
-(id)initWithFeeder:(id)arg1 profiles:(id)arg2 ;
-(void)setInterviewDelegate:(id<CLSInvestigationInterviewDelegate>)arg1 ;
-(id)sampleOfItems;
-(void)addTraceFromObject:(id)arg1 feature:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 withDescriptionFormat:(id)arg5 ;
-(id)_traceStringForType:(unsigned long long)arg1 ;
-(id)tracesDescription;
-(void)setEnableDebuggingClues:(char)arg1 ;
@end

