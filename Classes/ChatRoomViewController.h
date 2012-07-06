/* ChatRoomViewController.h
 *
 * Copyright (C) 2012  Belledonne Comunications, Grenoble, France
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or   
 *  (at your option) any later version.                                 
 *                                                                      
 *  This program is distributed in the hope that it will be useful,     
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of      
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       
 *  GNU General Public License for more details.                
 *                                                                      
 *  You should have received a copy of the GNU General Public License   
 *  along with this program; if not, write to the Free Software         
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */ 

#import <UIKit/UIKit.h>

#import "UIToggleButton.h"
#import "UICompositeViewController.h"
#import "ChatRoomTableViewController.h"
#import "ChatModel.h"

@interface ChatRoomViewController : UIViewController<UITextFieldDelegate, UICompositeViewDelegate> {
    ChatRoomTableViewController *tableController;
    UITextField *messageField;
    UIButton *sendButton;
    NSString *remoteContact;
    UIToggleButton *editButton;
}

- (void) setRemoteContact:(NSString*)remoteContact;

@property (nonatomic, retain) IBOutlet ChatRoomTableViewController* tableController;
@property (nonatomic, retain) IBOutlet UIToggleButton *editButton;
@property (nonatomic, retain) IBOutlet UITextField* messageField;
@property (nonatomic, retain) IBOutlet UIButton* sendButton;

- (IBAction)onBackClick:(id)event;
- (IBAction)onEditClick:(id)event;
- (IBAction)onMessageChange:(id)sender;
- (IBAction)onSendClick:(id)event;

@end
