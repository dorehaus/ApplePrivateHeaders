/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UnifiedFieldCompletionListParsecResultValidation.h>

@class NSMutableSet, NSString;

@interface UnifiedFieldCompletionListParsecResultValidator : NSObject <UnifiedFieldCompletionListParsecResultValidation> {

	NSMutableSet* _validatedResultIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)validateParsecResult:(id)arg1 withSession:(id)arg2 ;
-(void)resetValidationState;
-(char)_validateSimpleResult:(id)arg1 withSession:(id)arg2 ;
-(char)_isSFSearchResultValid:(id)arg1 ;
-(char)_validateNonEmptyDescriptionInResult:(id)arg1 ;
@end

