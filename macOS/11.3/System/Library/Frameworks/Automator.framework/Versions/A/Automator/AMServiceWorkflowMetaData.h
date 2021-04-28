/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/AMInputOutputWorkflowMetadata.h>

@class NSString, NSData, NSColor, NSDictionary, AMServiceWorkflowPersonality;

@interface AMServiceWorkflowMetaData : AMInputOutputWorkflowMetadata {

	NSString* _systemImageName;
	unsigned long long _presentationMode;
	NSData* _customImageFileData;
	NSString* _customImageFileExtension;
	NSColor* _backgroundColor;
	NSString* _backgroundColorName;

}

@property (nonatomic,readonly) NSData * _backgroundColorDataForSaving; 
@property (nonatomic,readonly) unsigned long long _presentationModeFromAppKit; 
@property (nonatomic,readonly) NSDictionary * _metaDataWithoutPresentationMode; 
@property (nonatomic,copy) NSString * systemImageName;                                                        //@synthesize systemImageName=_systemImageName - In the implementation block
@property (nonatomic,copy) NSString * backgroundColorName;                                                    //@synthesize backgroundColorName=_backgroundColorName - In the implementation block
@property (nonatomic,retain) NSColor * backgroundColor;                                                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;                                             //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,copy) NSData * customImageFileData;                                                      //@synthesize customImageFileData=_customImageFileData - In the implementation block
@property (nonatomic,copy) NSString * customImageFileExtension;                                               //@synthesize customImageFileExtension=_customImageFileExtension - In the implementation block
@property (nonatomic,__weak,readonly) AMServiceWorkflowPersonality * serviceWorkflowPersonality; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)backgroundColor;
-(id)metaData;
-(NSString *)backgroundColorName;
-(void)setBackgroundColorName:(NSString *)arg1 ;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(unsigned long long)presentationMode;
-(NSString *)systemImageName;
-(id)initWithPersonality:(id)arg1 ;
-(void)setFromDictionary:(id)arg1 ;
-(NSData *)customImageFileData;
-(void)setSystemImageName:(NSString *)arg1 ;
-(void)setCustomImageFileData:(NSData *)arg1 ;
-(void)setCustomImageFileExtension:(NSString *)arg1 ;
-(id)quickLookThumbnailImage;
-(NSString *)customImageFileExtension;
-(NSData *)_backgroundColorDataForSaving;
-(NSDictionary *)_metaDataWithoutPresentationMode;
-(AMServiceWorkflowPersonality *)serviceWorkflowPersonality;
-(void)_updatePresentationModeBasedOnMetaData;
-(unsigned long long)_presentationModeFromAppKit;
@end
