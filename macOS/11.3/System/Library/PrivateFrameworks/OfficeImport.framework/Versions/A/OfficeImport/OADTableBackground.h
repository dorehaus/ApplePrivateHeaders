/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OADEffectsParent.h>

@class OADFill, NSArray, NSString;

@interface OADTableBackground : NSObject <OADEffectsParent> {

	OADFill* mFill;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)fill;
-(void)setFill:(id)arg1 ;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(char)hasEffects;
@end

