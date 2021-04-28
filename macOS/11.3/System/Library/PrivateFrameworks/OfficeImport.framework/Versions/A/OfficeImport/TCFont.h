/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, TCFontFamily;

@interface TCFont : NSObject <NSCopying> {

	NSDictionary* _namesByLanguage;
	NSString* _psName;
	TCFontFamily* _family;
	TCFontStyling _styling;

}

@property (nonatomic,readonly) NSDictionary * namesByLanguage;              //@synthesize namesByLanguage=_namesByLanguage - In the implementation block
@property (nonatomic,readonly) NSString * psName;                           //@synthesize psName=_psName - In the implementation block
@property (nonatomic,readonly) TCFontStyling styling;                       //@synthesize styling=_styling - In the implementation block
@property (assign,nonatomic) TCFontFamily * family;                         //@synthesize family=_family - In the implementation block
+(id)fontWithFont:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)preferredLanguage;
-(TCFontFamily *)family;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(NSString *)psName;
-(TCFontStyling)styling;
-(id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(TCFontStyling)arg3 ;
-(id)englishName;
-(id)localizedFontName;
-(void)setFamily:(TCFontFamily *)arg1 ;
@end

