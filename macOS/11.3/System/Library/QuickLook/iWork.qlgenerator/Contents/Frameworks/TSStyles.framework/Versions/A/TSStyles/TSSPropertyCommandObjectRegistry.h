/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSStyles.framework/Versions/A/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSStyles/TSStyles-Structs.h>
@interface TSSPropertyCommandObjectRegistry : NSObject {

	map<int, std::__1::pair<Class, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::pair<Class, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>>>* _indexToClass;
	map<Class, int, std::__1::less<Class>, std::__1::allocator<std::__1::pair<const Class, int>>>* _classToIndex;

}
+(id)sharedRegistry;
+(void)setIntializationHandler:(/*^block*/id)arg1 ;
-(id)init;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>*)nameForIndex:(int)arg1 ;
-(void)registerClass:(Class)arg1 withField:(id)arg2 ;
-(Class)classForIndex:(int)arg1 ;
-(int)indexForClass:(Class)arg1 ;
@end

