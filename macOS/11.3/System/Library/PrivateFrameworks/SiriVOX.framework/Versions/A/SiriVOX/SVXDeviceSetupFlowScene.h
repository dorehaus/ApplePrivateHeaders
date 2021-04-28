/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, SVXDeviceSetupFlowSiriCapabilitiesHint;

@interface SVXDeviceSetupFlowScene : NSObject <NSCopying, NSSecureCoding> {

	long long _sceneID;
	NSString* _speakableText;
	NSArray* _displayKeyFrames;
	SVXDeviceSetupFlowSiriCapabilitiesHint* _siriCapabilitiesHint;

}

@property (nonatomic,readonly) long long sceneID;                                                               //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy,readonly) NSString * speakableText;                                                   //@synthesize speakableText=_speakableText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * displayKeyFrames;                                                 //@synthesize displayKeyFrames=_displayKeyFrames - In the implementation block
@property (nonatomic,copy,readonly) SVXDeviceSetupFlowSiriCapabilitiesHint * siriCapabilitiesHint;              //@synthesize siriCapabilitiesHint=_siriCapabilitiesHint - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)sceneID;
-(NSString *)speakableText;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithSceneID:(long long)arg1 speakableText:(id)arg2 displayKeyFrames:(id)arg3 siriCapabilitiesHint:(id)arg4 ;
-(SVXDeviceSetupFlowSiriCapabilitiesHint *)siriCapabilitiesHint;
-(NSArray *)displayKeyFrames;
@end

