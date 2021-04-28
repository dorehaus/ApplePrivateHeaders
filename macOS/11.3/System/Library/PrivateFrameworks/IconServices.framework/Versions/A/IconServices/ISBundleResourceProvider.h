/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/ISResourceProvider.h>

@class NSString, NSURL, NSDictionary;

@interface ISBundleResourceProvider : ISResourceProvider {

	NSString* _templateType;
	NSURL* _bundleURL;
	NSDictionary* _iconDictionary;

}

@property (retain) NSURL * bundleURL;                          //@synthesize bundleURL=_bundleURL - In the implementation block
@property (retain) NSDictionary * iconDictionary;              //@synthesize iconDictionary=_iconDictionary - In the implementation block
@property (assign) unsigned long long options; 
@property (retain) NSString * templateType;                    //@synthesize templateType=_templateType - In the implementation block
-(id)iconResource;
-(id)initWithBundleURL:(id)arg1 iconDictionary:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithBundle:(id)arg1 options:(unsigned long long)arg2 ;
-(id)customRecipe;
-(unsigned long long)iconShape;
-(id)templateIconResource;
-(void)resolveResources;
-(void)setIconDictionary:(NSDictionary *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSURL *)bundleURL;
-(NSDictionary *)iconDictionary;
-(id)symbol;
-(id)resourceNamed:(id)arg1 ;
-(NSString *)templateType;
-(void)setTemplateType:(NSString *)arg1 ;
@end

