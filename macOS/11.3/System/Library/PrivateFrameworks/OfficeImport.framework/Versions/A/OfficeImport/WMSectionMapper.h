/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDSection;

@interface WMSectionMapper : CMMapper {

	WDSection* wdSection;
	float mTopMargin;
	float mLeftMargin;
	char mBreakAtStart;
	char mBreakAtEnd;
	char mIsTitlePage;

}
+(char)isContentEmpty:(id)arg1 ;
-(float)topMargin;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDSection:(id)arg1 breakAtStart:(char)arg2 breakAtEnd:(char)arg3 parent:(id)arg4 ;
-(void)MapSectionStyleAt:(id)arg1 ;
-(void)mapHeaderAt:(id)arg1 withState:(id)arg2 ;
-(void)mapFooterAt:(id)arg1 withState:(id)arg2 ;
@end
