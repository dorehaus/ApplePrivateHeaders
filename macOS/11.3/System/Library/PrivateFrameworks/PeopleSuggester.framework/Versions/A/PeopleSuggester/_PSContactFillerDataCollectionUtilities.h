/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PSContactFillerDataCollectionUtilities : NSObject
+(id)resolveUniqueContactIdGivenInteraction:(id)arg1 ;
+(int)calculateTimeBucketGivenInteraction:(id)arg1 timeOfShareInteraction:(id)arg2 ;
+(unsigned)contactFillerBucketedValue:(unsigned long long)arg1 ;
+(id)calculateNormalizedShareFrequencyForContactGivenInteraction:(id)arg1 totalFrequency:(id)arg2 numberOfDaysToLookBack:(int)arg3 interactionStore:(id)arg4 ;
+(unsigned)enforceOneSignificantFigureForSmallDouble:(double)arg1 ;
+(id)calculateNormalizedTextingFrequencyForContactGivenInteraction:(id)arg1 totalFrequency:(id)arg2 numberOfDaysToLookBack:(int)arg3 interactionStore:(id)arg4 direction:(id)arg5 ;
+(id)calculateNormalizedCallingFrequencyForContactGivenInteraction:(id)arg1 totalFrequency:(id)arg2 numberOfDaysToLookBack:(int)arg3 interactionStore:(id)arg4 direction:(id)arg5 ;
+(int)calculateTimeSinceLastCallForContactGivenInteraction:(id)arg1 interactionStore:(id)arg2 direction:(id)arg3 timeOfShareInteraction:(id)arg4 ;
+(int)calculateTimeSinceLastShareForContactGivenInteraction:(id)arg1 interactionStore:(id)arg2 timeOfShareInteraction:(id)arg3 ;
+(int)calculateTimeSinceLastTextForContactGivenInteraction:(id)arg1 interactionStore:(id)arg2 direction:(id)arg3 timeOfShareInteraction:(id)arg4 ;
+(id)getListOfContactsInteractedInTheLastNumberOfDays:(int)arg1 interactionStore:(id)arg2 limit:(int)arg3 ;
+(id)getBehaviorRulesGivenContext:(id)arg1 behaviorRetriever:(id)arg2 ;
+(void)calculateNormContantsGivenInteractionStore:(id)arg1 normConstants:(id)arg2 ;
+(void)extractUserFeaturesIntoPETMessage:(id)arg1 normConstants:(id)arg2 behaviorRetriever:(id)arg3 ;
+(id)filterRulesBasedOnInteractionGivenRuleList:(id)arg1 interaction:(id)arg2 ;
+(BOOL)recipientPredictedCorrectlyByRule:(id)arg1 interaction:(id)arg2 bundleId:(id)arg3 ;
+(void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)arg1 behaviorRules:(id)arg2 contextItems:(id)arg3 ;
+(double)enforceOneSignificantFigureForDouble:(double)arg1 ;
+(void)extractFrequencyRecencyFeaturesIntoPETMessage:(id)arg1 recipientID:(id)arg2 interaction:(id)arg3 normConstants:(id)arg4 numberOfDaysToLookBack:(int)arg5 interactionStore:(id)arg6 timeOfShareInteraction:(id)arg7 ;
+(char)doesTheRecipientsMatchInInteraction1:(id)arg1 interaction2:(id)arg2 ;
@end
