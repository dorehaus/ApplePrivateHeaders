/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/Versions/A/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFLSMResult, NSString;

@interface WFVerdict : NSObject {

	char restricted;
	WFLSMResult* LSMEvaluationResult;
	NSString* message;
	NSString* URL;
	int evidence;

}
+(id)verdictWithRestriction:(char)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5 ;
-(void)setEvidence:(int)arg1 ;
-(void)setLSMEvaluationResult:(id)arg1 ;
-(int)evidence;
-(id)LSMEvaluationResult;
-(void)dealloc;
-(id)description;
-(id)URL;
-(char)restricted;
-(void)setURL:(id)arg1 ;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)setRestricted:(char)arg1 ;
@end
