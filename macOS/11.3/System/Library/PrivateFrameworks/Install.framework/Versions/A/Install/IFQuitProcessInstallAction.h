/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/IFInstallAction.h>

@class NSString;

@interface IFQuitProcessInstallAction : IFInstallAction {

	NSString* _title;

}
-(void)dealloc;
-(id)init;
-(id)title;
-(char)loadFromXMLElement:(id)arg1 scripts:(id)arg2 ;
-(id)errorDictionary;
-(char)runWithQueueElement:(id)arg1 ;
-(id)actionSpecificMetadata;
@end

