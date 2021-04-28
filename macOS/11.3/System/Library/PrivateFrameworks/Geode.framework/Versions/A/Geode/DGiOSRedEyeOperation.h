/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/IPAOperation.h>

@class NSArray;

@interface DGiOSRedEyeOperation : IPAOperation {

	NSArray* _redEyeCorrections;
	NSArray* _autoRedEyeCorrections;

}

@property (nonatomic,copy) NSArray * redEyeCorrections;                  //@synthesize redEyeCorrections=_redEyeCorrections - In the implementation block
@property (nonatomic,copy) NSArray * autoRedEyeCorrections;              //@synthesize autoRedEyeCorrections=_autoRedEyeCorrections - In the implementation block
+(id)attributes;
-(id)initWithOperation:(id)arg1 ;
-(id)inputKeys;
-(id)outputKeys;
-(id)settingsDictionary;
-(char)isMigratable;
-(void)addCorrection:(id)arg1 ;
-(char)needsInputImageWithoutGeometry;
-(char)needsFullSizeMaster;
-(char)isVideoCompatible;
-(char)applySettingsDictionary:(id)arg1 ;
-(NSArray *)redEyeCorrections;
-(NSArray *)autoRedEyeCorrections;
-(id)allCorrections;
-(id)_removeCorrection:(id)arg1 fromArray:(id)arg2 ;
-(void)removeCorrection:(id)arg1 ;
-(void)setRedEyeCorrections:(NSArray *)arg1 ;
-(void)setAutoRedEyeCorrections:(NSArray *)arg1 ;
@end

