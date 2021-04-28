/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/_MPKeyPathEntityRelationshipTranslator.h>

@class NSString;

@interface _MPMediaKitEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator {

	NSString* _mediaKitType;
	/*^block*/id _payloadTransformBlock;

}

@property (nonatomic,copy) NSString * mediaKitType;                   //@synthesize mediaKitType=_mediaKitType - In the implementation block
@property (nonatomic,readonly) id payloadTransformBlock;              //@synthesize payloadTransformBlock=_payloadTransformBlock - In the implementation block
-(id)prepareSource:(id)arg1 context:(id)arg2 ;
-(id)initWithRelatedMPModelClass:(Class)arg1 mediaKitType:(id)arg2 payloadTransformBlock:(/*^block*/id)arg3 ;
-(NSString *)mediaKitType;
-(void)setMediaKitType:(NSString *)arg1 ;
-(id)payloadTransformBlock;
@end

