/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DESRecipeEvaluation <NSObject>
@optional
-(id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 error:(id*)arg5;
-(id)telemetryWithRecordSet:(id)arg1;
-(char)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3;
-(id)serverSafeRecordInfoWithRecordInfo:(id)arg1;
-(id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 error:(id*)arg3;
-(id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 binaryResult:(id*)arg3 error:(id*)arg4;
-(void)performEvaluation:(id)arg1;

@end

