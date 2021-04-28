/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCNearbyKey : NSObject {

	unsigned short _character;
	float _logLikelihood;

}

@property (nonatomic,readonly) unsigned short character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,readonly) float logLikelihood;                   //@synthesize logLikelihood=_logLikelihood - In the implementation block
-(float)logLikelihood;
-(unsigned short)character;
-(id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2 ;
@end
