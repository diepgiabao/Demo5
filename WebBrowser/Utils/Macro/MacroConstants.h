//
//  MacroUIConstants.h
//  WebBrowser
//
//  Created by 钟武 on 16/7/29.
//  Copyright © 2016年 钟武. All rights reserved.
//

#ifndef MacroConstants_h
#define MacroConstants_h

#define STATUS_BAR_HEIGHT [UIApplication sharedApplication].statusBarFrame.size.height

#define BOTTOM_TOOL_BAR_HEIGHT 44
#define TOP_TOOL_BAR_HEIGHT 70
#define TOP_TOOL_BAR_THRESHOLD 45

#define Card_Cell_Close_Width 50
#define Card_Cell_Close_Height 50

#define TEXT_FIELD_PLACEHOLDER   @"Search or enter URL"

#define BAIDU_SEARCH_URL @"https://onbibi.com/search?q=%@"

#define DEFAULT_IMAGE @"default"
#define DEFAULT_CARD_CELL_IMAGE @"baidu"
#define DEFAULT_CARD_CELL_URL   @"https://onbibi.com/m"
#define DEFAULT_CARD_CELL_TITLE @"Onbibi.com"

#pragma mark - Notification
// 无图模式
#define kNoImageModeChanged         @"kNoImageModeChanged"
// 护眼模式
#define kEyeProtectiveModeChanged   @"kEyeProtectiveModeChanged"
// tab switch
#define kWebTabSwitch               @"kWebTabSwitch"
// webView navigation change
#define kWebHistoryItemChangedNotification @"WebHistoryItemChangedNotification"
// expand toolbar
#define kExpandHomeToolBarNotification @"kExpandHomeToolBarNotification"
// open in new window
#define kOpenInNewWindowNotification @"kOpenInNewWindowNotification"

#endif /* MacroConstants_h */
