/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject {

	NSMutableDictionary* _confidenceThresholdBySceneIdentifierBySceneLabel;

}
+(id)confidenceThresholdTypeBySceneLabel;
+(id)sceneNamesBySceneLabel;
+(id)sharedSceneMatcher;
+(id)junkSceneNames;
+(id)junkSceneNamesLegacy;
+(id)babyChildTeenAdultAndPetSceneNames;
+(id)babyAndPetSceneNames;
+(id)childTeenAndAdultSceneNames;
+(id)interestingSceneNames;
+(id)whiteboardSceneNames;
+(id)sceneNamesWithSceneLabel:(id)arg1 ;
-(id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1 ;
@end

