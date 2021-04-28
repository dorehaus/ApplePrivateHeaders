/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class NSString;

@interface WMSymbolMapper : CMMapper {

	unsigned short mCharacter;
	NSString* mFontName;

}
+(unsigned short)mapWindingsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapCharacter:(unsigned short)arg1 withFontName:(id)arg2 ;
+(char)isSymbolFontName:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDSymbol:(id)arg1 parent:(id)arg2 ;
@end
