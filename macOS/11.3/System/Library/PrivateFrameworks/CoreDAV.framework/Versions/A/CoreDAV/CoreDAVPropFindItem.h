/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPropFindItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _propName;
	CoreDAVItemWithNoChildren* _allProp;
	CoreDAVItem* _include;
	CoreDAVItem* _prop;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * propName;              //@synthesize propName=_propName - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * allProp;               //@synthesize allProp=_allProp - In the implementation block
@property (nonatomic,retain) CoreDAVItem * include;                             //@synthesize include=_include - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                                //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)propName;
-(CoreDAVItemWithNoChildren *)allProp;
-(CoreDAVItem *)include;
-(void)setPropName:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAllProp:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInclude:(CoreDAVItem *)arg1 ;
@end
